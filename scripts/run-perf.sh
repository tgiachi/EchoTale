#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PROJECT_PATH="$ROOT_DIR/perf/EchoTale.Dsl.Perf/EchoTale.Dsl.Perf.csproj"

dotnet run -c Release --project "$PROJECT_PATH" -- "$@"
