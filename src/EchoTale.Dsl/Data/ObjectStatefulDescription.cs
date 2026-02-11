namespace EchoTale.Dsl.Data;

public sealed record ObjectStatefulDescription(
    string ConditionObjectId,
    bool ConditionIsOpen,
    string WhenText,
    string ElseText);
