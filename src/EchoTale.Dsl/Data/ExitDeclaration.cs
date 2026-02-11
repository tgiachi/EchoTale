using EchoTale.Dsl.Types.World;

namespace EchoTale.Dsl.Data;

public sealed record ExitDeclaration(
    WorldDirection Direction,
    string TargetRoomId,
    bool Locked,
    string? KeyObjectId,
    string? LockedMessage);
