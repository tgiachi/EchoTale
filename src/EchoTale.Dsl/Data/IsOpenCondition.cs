namespace EchoTale.Dsl.Data;

public sealed record IsOpenCondition(string ObjectId, bool Value) : RuleCondition;
