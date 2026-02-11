namespace EchoTale.Dsl.Data;

public sealed record SetFlagAction(string FlagId, bool Value) : RuleAction;
