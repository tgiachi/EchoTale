namespace EchoTale.Dsl.Data;

public sealed record FlagIsCondition(string FlagId, bool Value) : RuleCondition;
