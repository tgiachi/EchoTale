#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
PROJECT_PATH="${ROOT_DIR}/src/EchoTale.Dsl.Validator/EchoTale.Dsl.Validator.csproj"
PACKAGE_DIR="${ROOT_DIR}/artifacts/tools"
PACKAGE_ID="etaleval"
PACKAGE_VERSION="0.1.1"

echo "[1/3] Packing ${PACKAGE_ID}..."
dotnet pack "${PROJECT_PATH}" -c Release

echo "[2/3] Installing/Updating global tool ${PACKAGE_ID} from ${PACKAGE_DIR}..."
dotnet tool update --global "${PACKAGE_ID}" --version "${PACKAGE_VERSION}" --add-source "${PACKAGE_DIR}"

echo "[3/3] Done."
echo "Run: etaleval --help"
