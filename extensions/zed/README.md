# EchoTale DSL — Zed Extension

Tree-sitter based language support for the EchoTale DSL (`.etale` files) in [Zed](https://zed.dev).

## Features

- Syntax highlighting for all DSL constructs
- Outline panel (rooms, objects, rules, verbs)
- Autocomplete for room IDs, object IDs, sound/music keys, flags and verbs
- Comment support (`#`, `//`, `/* */`)
- Bracket auto-close

## Install (dev extension)

1. **Generate the tree-sitter parser**

```bash
cd extensions/zed/grammars/echotale
npm install
npx tree-sitter generate
```

2. **Install in Zed**

- Open Zed
- Open the command palette (`Cmd+Shift+P`)
- Run `zed: install dev extension`
- Select the `extensions/zed` folder

3. **Open any `.etale` file** — syntax highlighting and autocomplete will be active.

## Updating

After modifying `grammar.js` or any `.scm` file, re-run `npx tree-sitter generate` and reload Zed (`Cmd+Shift+P` → `zed: reload extensions`).
