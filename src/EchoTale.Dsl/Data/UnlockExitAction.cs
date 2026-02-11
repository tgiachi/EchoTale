using EchoTale.Dsl.Types.World;

namespace EchoTale.Dsl.Data;

public sealed record UnlockExitAction(string RoomId, WorldDirection Direction) : RuleAction;
