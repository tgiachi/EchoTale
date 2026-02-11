using EchoTale.Dsl.Types.World;

namespace EchoTale.Dsl.Data;

public sealed record ExitLockedCondition(string RoomId, WorldDirection Direction) : RuleCondition;
