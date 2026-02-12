using EchoTale.Client.Types;

namespace EchoTale.Client.Data.Internal;

public class StoryCreatorConfig
{
    public string StoryName { get; set; }

    public string Title { get; set; }

    public string Language { get; set; }

    public string Description { get; set; }

    public StoryGenreType Genre { get; set; }

    public string NumRooms { get; set; }
}
