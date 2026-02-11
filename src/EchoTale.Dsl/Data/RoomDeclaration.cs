namespace EchoTale.Dsl.Data;

public sealed record RoomDeclaration(
    string Id,
    string? Name,
    string? Image,
    string? Description,
    string? Ambient,
    IReadOnlyList<ExitDeclaration> Exits,
    IReadOnlyList<string> Contains);
