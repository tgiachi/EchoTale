namespace EchoTale.Dsl.Data;

public sealed record CommandTrigger(string Command, string Variable) : RuleTrigger;
