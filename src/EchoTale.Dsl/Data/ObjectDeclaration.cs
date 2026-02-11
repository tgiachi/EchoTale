namespace EchoTale.Dsl.Data;

public sealed record ObjectDeclaration(
    string Id,
    string? Name,
    string? Description,
    ObjectStatefulDescription? StatefulDescription,
    bool? Portable,
    bool? Container,
    bool? Openable,
    bool? Locked,
    bool? IsOpen,
    bool? Hidden,
    IReadOnlyList<string> Contains,
    IReadOnlyList<RuleAction> DefaultActions,
    IReadOnlyList<ObjectVerbDeclaration> Verbs);
