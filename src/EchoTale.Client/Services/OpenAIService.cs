using System.Text;
using System.Text.Json;
using EchoTale.Client.Data;
using EchoTale.Client.Interfaces.Services;
using OpenAI.Chat;

namespace EchoTale.Client.Services;

public class OpenAIService : IOpenAIService
{
    private readonly ChatClient _chatClient;

    public OpenAIService(EchoTaleConfig config, IJobScheduler jobScheduler)
    {
        _chatClient = new ChatClient(config.OpenAIChatModel, config.OpenAIKey);
    }

    public async Task<string> GetChatCompletionAsync(
        string prompt,
        Dictionary<string, string>? vars = null,
        CancellationToken cancellationToken = default
    )
    {
        var messages = BuildMessages(prompt, vars);

        var response = await _chatClient.CompleteChatAsync(
                           messages,
                           cancellationToken: cancellationToken
                       );

        var text = response.Value.Content.FirstOrDefault()?.Text;
        if (string.IsNullOrWhiteSpace(text))
        {
            throw new InvalidOperationException("OpenAI returned an empty chat completion.");
        }

        return text;
    }

    public async Task<TEntity> GetChatCompletionAsync<TEntity>(
        string prompt,
        Dictionary<string, string>? vars,
        CancellationToken cancellationToken = default
    ) where TEntity : class
    {
        var result = await GetChatCompletionAsync(prompt, vars, cancellationToken);
        var entity = JsonSerializer.Deserialize<TEntity>(result);
        if (entity is null)
        {
            throw new InvalidOperationException("OpenAI response could not be deserialized.");
        }

        return entity;
    }

    public async Task<string> GetChatCompletionStreamingAsync(
        string prompt,
        Dictionary<string, string>? vars,
        Action<string>? onChunk = null,
        CancellationToken cancellationToken = default
    )
    {
        var messages = BuildMessages(prompt, vars);
        var updates = _chatClient.CompleteChatStreamingAsync(messages, cancellationToken: cancellationToken);
        StringBuilder builder = new();

        await foreach (StreamingChatCompletionUpdate update in updates)
        {
            if (update.ContentUpdate.Count == 0)
            {
                continue;
            }

            foreach (ChatMessageContentPart part in update.ContentUpdate)
            {
                if (string.IsNullOrEmpty(part.Text))
                {
                    continue;
                }

                builder.Append(part.Text);
                onChunk?.Invoke(part.Text);
            }
        }

        if (builder.Length == 0)
        {
            throw new InvalidOperationException("OpenAI returned an empty streaming chat completion.");
        }

        return builder.ToString();
    }

    public async Task<TEntity> GetChatCompletionStreamingAsync<TEntity>(
        string prompt,
        Dictionary<string, string>? vars,
        Action<string>? onChunk = null,
        CancellationToken cancellationToken = default
    ) where TEntity : class
    {
        var result = await GetChatCompletionStreamingAsync(prompt, vars, onChunk, cancellationToken);
        var entity = JsonSerializer.Deserialize<TEntity>(result);
        if (entity is null)
        {
            throw new InvalidOperationException("OpenAI streaming response could not be deserialized.");
        }

        return entity;
    }

    private static List<ChatMessage> BuildMessages(string prompt, Dictionary<string, string>? vars)
    {
        string resolvedPrompt = ApplyVariables(prompt, vars);

        return
        [
            new SystemChatMessage("You are a helpful assistant that helps create a story based on the user's input"),
            new UserChatMessage(resolvedPrompt)
        ];
    }

    private static string ApplyVariables(string prompt, Dictionary<string, string>? vars)
    {
        if (vars is null || vars.Count == 0 || string.IsNullOrEmpty(prompt))
        {
            return prompt;
        }

        string resolved = prompt;
        foreach ((string key, string value) in vars)
        {
            resolved = resolved.Replace($"{{{key}}}", value, StringComparison.OrdinalIgnoreCase);
        }

        return resolved;
    }

    public void Dispose()
    {
        GC.SuppressFinalize(this);
    }
}
