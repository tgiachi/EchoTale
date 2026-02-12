using EchoTale.Dsl;
using EchoTale.Dsl.Data;
using EchoTale.Dsl.Types.Validation;

if (args.Length == 0 || args[0] is "--help" or "-h")
{
    PrintUsage();

    return args.Length == 0 ? 1 : 0;
}

string filePath = args[0];
bool semanticOnly = args.Any(a => string.Equals(a, "--semantic-only", StringComparison.OrdinalIgnoreCase));
bool parseOnly = args.Any(a => string.Equals(a, "--parse-only", StringComparison.OrdinalIgnoreCase));

if (semanticOnly && parseOnly)
{
    Console.Error.WriteLine("Options --semantic-only and --parse-only cannot be used together.");

    return 1;
}

if (!File.Exists(filePath))
{
    Console.Error.WriteLine($"File not found: {filePath}");

    return 1;
}

string source = await File.ReadAllTextAsync(filePath);

GameDocument document;
try
{
    document = EchoTaleDslParser.Parse(source);
}
catch (Exception ex)
{
    Console.Error.WriteLine("Parse failed:");
    Console.Error.WriteLine(ex.Message);

    return 2;
}

if (parseOnly)
{
    Console.WriteLine($"Parse OK: {filePath}");

    return 0;
}

var validator = new DslSemanticValidator();
IReadOnlyList<DslDiagnostic> diagnostics = validator.Validate(document, source);

foreach (var diagnostic in diagnostics.OrderByDescending(d => d.Severity).ThenBy(d => d.Location?.Line ?? int.MaxValue))
{
    string where = diagnostic.Location is null
                       ? string.Empty
                       : $" ({diagnostic.Location.Line},{diagnostic.Location.Column})";

    Console.WriteLine($"{diagnostic.Severity.ToString().ToUpperInvariant()} {diagnostic.Code}{where}: {diagnostic.Message}");
}

int errorCount = diagnostics.Count(d => d.Severity == DslDiagnosticSeverity.Error);
int warningCount = diagnostics.Count(d => d.Severity == DslDiagnosticSeverity.Warning);

if (semanticOnly || diagnostics.Count > 0)
{
    Console.WriteLine($"Diagnostics: {errorCount} error(s), {warningCount} warning(s)");
}

if (errorCount > 0)
{
    return 3;
}

Console.WriteLine($"Validation OK: {filePath}");

return 0;

static void PrintUsage()
{
    Console.WriteLine("EchoTale DSL Validator");
    Console.WriteLine("Usage:");
    Console.WriteLine("  etaleval <file.etale> [--parse-only | --semantic-only]");
    Console.WriteLine();
    Console.WriteLine("Options:");
    Console.WriteLine("  --parse-only      Only parse syntax.");
    Console.WriteLine("  --semantic-only   Run parse + semantic diagnostics (default behavior).");
}
