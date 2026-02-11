namespace EchoTale.Dsl.Data;

public sealed record RuleDeclaration(
    string Id,
    bool Once,
    RuleTrigger Trigger,
    IReadOnlyList<RuleCondition> Conditions,
    IReadOnlyList<RuleAction> Actions);
