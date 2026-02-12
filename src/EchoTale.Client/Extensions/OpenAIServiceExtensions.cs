using System.Reflection;
using EchoTale.Client.Interfaces.Services;
using EchoTale.Client.Utils;

namespace EchoTale.Client.Extensions;

public static class OpenAIServiceExtensions
{
    public static Task<TEntity> GetChatCompletionStreamingFromResourceAsync<TEntity>(
        this IOpenAIService openAIService,
        string resourceName,
        Dictionary<string, string>? vars = null,
        Action<string>? onChunk = null,
        CancellationToken cancellationToken = default
    ) where TEntity : class
    {
        ArgumentNullException.ThrowIfNull(openAIService);
        ArgumentException.ThrowIfNullOrWhiteSpace(resourceName);

        Assembly assembly = Assembly.GetEntryAssembly() ?? Assembly.GetExecutingAssembly();
        string prompt = ResourceUtils.GetEmbeddedResourceString(assembly, resourceName);

        return openAIService.GetChatCompletionStreamingAsync<TEntity>(
            prompt,
            vars,
            onChunk,
            cancellationToken
        );
    }
}
