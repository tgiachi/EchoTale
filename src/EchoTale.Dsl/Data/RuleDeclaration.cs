namespace EchoTale.Dsl.Data;

public sealed record RuleDeclaration(
    string Id,
    RuleTrigger Trigger,
    IReadOnlyList<RuleCondition> Conditions,
    IReadOnlyList<RuleAction> Actions);
