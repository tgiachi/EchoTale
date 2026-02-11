namespace EchoTale.Dsl.Data;

public sealed record ObjectVerbDeclaration(
    string Verb,
    string? Variable,
    IReadOnlyList<RuleCondition> Conditions,
    IReadOnlyList<RuleAction> Actions,
    IReadOnlyList<RuleAction> ElseActions);
