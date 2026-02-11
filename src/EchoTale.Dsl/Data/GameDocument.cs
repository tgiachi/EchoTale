namespace EchoTale.Dsl.Data;

public sealed record GameDocument(
    string GameTitle,
    string? Author,
    string? Version,
    string StartRoomId,
    PlayerDeclaration? Player,
    IReadOnlyList<string> Includes,
    IReadOnlyDictionary<string, string> Voices,
    IReadOnlyDictionary<string, string> Sounds,
    IReadOnlyDictionary<string, string> Music,
    IReadOnlyList<RoomDeclaration> Rooms,
    IReadOnlyList<ObjectDeclaration> Objects,
    IReadOnlyList<RuleDeclaration> Rules);
