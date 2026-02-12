namespace EchoTale.Client.Interfaces.Services;

public interface IOpenAIService : IDisposable
{

    Task<string> GetChatCompletionAsync(
        string prompt,
        Dictionary<string, string>? vars,
        CancellationToken cancellationToken = default
    );


    Task<TEntity> GetChatCompletionAsync<TEntity>(
        string prompt,
        Dictionary<string, string>? vars,
        CancellationToken cancellationToken = default
    ) where TEntity : class;

    Task<string> GetChatCompletionStreamingAsync(
        string prompt,
        Dictionary<string, string>? vars,
        Action<string>? onChunk = null,
        CancellationToken cancellationToken = default
    );

    Task<TEntity> GetChatCompletionStreamingAsync<TEntity>(
        string prompt,
        Dictionary<string, string>? vars,
        Action<string>? onChunk = null,
        CancellationToken cancellationToken = default
    ) where TEntity : class;

}
