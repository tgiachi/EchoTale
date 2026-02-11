namespace EchoTale.Dsl.Data;

public sealed record RevealInRoomAction(string ObjectId, string RoomId) : RuleAction;
