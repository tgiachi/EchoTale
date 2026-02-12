using EchoTale.Client.Data;
using EchoTale.Client.Interfaces.Services;
using OpenAI.Chat;
using OpenAI.Images;

namespace EchoTale.Client.Services;

public class OpenAIService : IOpenAIService
{
    private readonly ChatClient _chatClient;
    private readonly ImageClient _imageClient;

    private readonly IJobScheduler _jobScheduler;

    public OpenAIService(EchoTaleConfig config, IJobScheduler jobScheduler)
    {
        _jobScheduler = jobScheduler;
        _chatClient = new ChatClient(config.OpenAIChatModel, config.OpenAIKey);
        _imageClient = new ImageClient(config.OpenAIImageModel, config.OpenAIKey);
    }

    public void Dispose()
    {
        GC.SuppressFinalize(this);
    }
}
