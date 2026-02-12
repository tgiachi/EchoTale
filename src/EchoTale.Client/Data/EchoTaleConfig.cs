namespace EchoTale.Client.Data;

public class EchoTaleConfig
{
    public string OpenAIKey { get; set; }
    public string OpenAIChatModel { get; set; } = "gpt-5-mini";
    public string OpenAIImageModel { get; set; }

    public string ElevenLabsKey { get; set; }
}
