namespace EchoTale.Dsl.Data;

public sealed record PlayerDeclaration(
    string StartRoomId,
    string? GivesObjectId,
    int Hp);
