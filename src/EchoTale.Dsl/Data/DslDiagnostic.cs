using EchoTale.Dsl.Types.Validation;

namespace EchoTale.Dsl.Data;

public sealed record DslDiagnostic(
    string Code,
    DslDiagnosticSeverity Severity,
    string Message,
    SourceLocation? Location);
