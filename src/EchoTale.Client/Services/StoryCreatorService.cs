using System.Text;
using EchoTale.Client.Data.Internal;
using EchoTale.Client.Interfaces.Services;
using EchoTale.Client.Utils;

namespace EchoTale.Client.Services;

public class StoryCreatorService : IStoryCreatorService
{
    private readonly IJobScheduler _jobScheduler;

    private readonly IOpenAIService _openAIService;

    public StoryCreatorService(IJobScheduler jobScheduler, IOpenAIService openAiService)
    {
        _jobScheduler = jobScheduler;
        _openAIService = openAiService;
    }

    public void CreateStoryInBackground(StoryCreatorConfig config)
    {
        _jobScheduler.Enqueue(() => CreateStoryAsync(config));
    }

    private async Task CreateStoryAsync(StoryCreatorConfig config)
    {

        config.NumRooms = Random.Shared.Next(5, 10).ToString();

        var storyPrompt = new StringBuilder();


        var vars = new Dictionary<string, string>
        {
            ["title"] = config.Title,
            ["description"] = config.Description,
            ["genre"] = config.Genre.ToString(),
            ["num_rooms"] = config.NumRooms,
            ["num_objects"] = Random.Shared.Next(1, 5).ToString(),
            ["num_puzzles"] = Random.Shared.Next(1, 5).ToString(),
            ["num_reveal"] = Random.Shared.Next(1, 5).ToString(),
        };

        storyPrompt.Append(
            ResourceUtils.GetEmbeddedResourceString(
                typeof(Program).Assembly,
                "Assets/Prompts/dsl_generator.md"
            )
        );

        storyPrompt.Append("\n\n");

        storyPrompt.Append(
            ResourceUtils.GetEmbeddedResourceString(
                typeof(Program).Assembly,
                "Assets/dsl/DSL.ebnf"
            )
        );

        storyPrompt.Append("\n\n");

        storyPrompt.Append(
            ResourceUtils.GetEmbeddedResourceString(
                typeof(Program).Assembly,
                "Assets/dsl/dsl-rules.yaml"
            )
        );

        storyPrompt.Append("\n\n");

        storyPrompt.Append(
            ResourceUtils.GetEmbeddedResourceString(
                typeof(Program).Assembly,
                "Assets/dsl/dsl-corpus.jsonl"
            )
        );

        var compliedPrompt = storyPrompt.ToString();

       var result =  await _openAIService.GetChatCompletionAsync(compliedPrompt, vars, CancellationToken.None);


    }
}
