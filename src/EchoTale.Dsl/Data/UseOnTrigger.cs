namespace EchoTale.Dsl.Data;

public sealed record UseOnTrigger(string ObjectId, string TargetId) : RuleTrigger;
