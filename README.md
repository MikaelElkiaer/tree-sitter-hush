# tree-sitter-hush

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for [Hush](https://hush-shell.github.io/).

## Use (in Neovim)

```bash
mkdir -p ~/.config/nvim/queries/hush/
wget https://raw.githubusercontent.com/MikaelElkiaer/tree-sitter-hush/main/queries/hush/highlights.scm \
  -O ~/.config/nvim/queries/hush/highlights.scm
```

```lua
-- init.lua
local parser_configs = require "nvim-treesitter.parsers".get_parser_configs()
parser_configs.hush = {
  install_info = {
    url = "https://github.com/MikaelElkiaer/tree-sitter-hush",
    files = {"src/parser.c"},
    -- optional entries:
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  }
}
```

## Build

```bash
# npm install -g tree-sitter-cli
tree-sitter generate
```

## Develop

```bash
tree-sitter generate \
  && tree-sitter build-wasm \
  && tree-sitter playground
```
