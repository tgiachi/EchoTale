namespace EchoTale.Client.Data.Internal;

public record LogEmitData(string Message, int CurrentProcessed, int TotalToProcess);
