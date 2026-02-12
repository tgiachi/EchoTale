# EchoTale DSL Training Pack

This folder contains a machine-friendly pack to teach and evaluate EchoTale DSL.

## Files

- `DSL.md`: Human-readable language documentation.
- `DSL.ebnf`: Formal grammar (parser-aligned, v0.1).
- `dsl-rules.yaml`: Semantic rules and validator expectations.
- `dsl-corpus.jsonl`: Training/evaluation samples (valid + invalid with expected diagnostics).

## Recommended Usage

1. Use `DSL.md` + `DSL.ebnf` in system/context prompts for syntax grounding.
2. Use `dsl-rules.yaml` for semantic constraints and runtime assumptions.
3. Use `dsl-corpus.jsonl` for:
   - few-shot examples,
   - regression checks,
   - automatic eval (parse + validate + compare expected errors).

## Eval Pattern

For each JSONL row:

1. Parse `input` with `EchoTaleDslParser.Parse`.
2. Run `DslSemanticValidator.Validate(document, input)`.
3. If `valid=true`, assert no blocking errors.
4. If `valid=false`, assert `expected_error` is present.

## Notes

- Canonical extension: `.etale`.
- Includes are declared in DSL; file merge/loading is external to parser.
