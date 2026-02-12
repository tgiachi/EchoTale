using EchoTale.Client.Data.Internal;

namespace EchoTale.Client.Interfaces.Services;

public interface IStoryCreatorService
{
    void CreateStoryInBackground(StoryCreatorConfig config);

}
