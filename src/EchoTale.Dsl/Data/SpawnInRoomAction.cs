namespace EchoTale.Dsl.Data;

public sealed record SpawnInRoomAction(string ObjectId, string RoomId) : RuleAction;
