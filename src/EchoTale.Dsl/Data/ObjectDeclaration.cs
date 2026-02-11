namespace EchoTale.Dsl.Data;

public sealed record ObjectDeclaration(
    string Id,
    string? Name,
    string? Description,
    bool? Portable,
    bool? Container,
    bool? Openable,
    bool? Locked,
    bool? IsOpen,
    IReadOnlyList<string> Contains,
    IReadOnlyList<ObjectVerbDeclaration> Verbs);
