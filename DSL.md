# EchoTale DSL

Base reference for writing interactive stories in EchoTale.

This document describes the current implemented DSL, including grammar, semantics, validation rules, and practical workflows.

## Table of Contents

1. [Overview](#overview)
2. [File Structure](#file-structure)
3. [Lexical Rules](#lexical-rules)
4. [Top-Level Declarations](#top-level-declarations)
5. [Rooms](#rooms)
6. [Objects](#objects)
7. [Object Verbs (Embedded Puzzle Logic)](#object-verbs-embedded-puzzle-logic)
8. [Rules](#rules)
9. [Triggers](#triggers)
10. [Conditions](#conditions)
11. [Actions](#actions)
12. [Audio: Sounds and Music](#audio-sounds-and-music)
13. [Includes](#includes)
14. [Player Semantics](#player-semantics)
15. [Spawn Semantics (v0.1)](#spawn-semantics-v01)
16. [Comments](#comments)
17. [Validation and Diagnostics](#validation-and-diagnostics)
18. [How To: Build a Story from Scratch](#how-to-build-a-story-from-scratch)
19. [Complete Example](#complete-example)
20. [Current Limits and Future Extensions](#current-limits-and-future-extensions)

## Overview

EchoTale DSL is a declarative scripting language to define:

- world structure (rooms, exits, objects)
- player bootstrap data
- scripted logic (rules)
- object-local interactions (verbs)
- audio resources and audio actions

The parser builds an AST (abstract syntax tree). A semantic validator then checks cross-references and key constraints.

## File Structure

A valid file starts with a `game` header and then zero or more top-level declarations.

```dsl
game "My Story" start foyer

include "common/base.etf"

sounds {
  click = "click.wav"
}

music {
  intro = "intro.ogg"
}

player {
  start foyer
  gives key
  hp 20
}

room foyer { ... }
object key { ... }
rule intro_rule { ... }
```

## Lexical Rules

- Identifiers: letters/digits/underscore, starting with letter or underscore.
  - Examples: `foyer`, `keypad_door`, `seenLab`, `rain_start`
- Strings: double-quoted.
  - Escapes supported: `\\`, `\"`, `\n`, `\r`, `\t`
- Booleans: `true` / `false`
- Integer: unsigned numeric literal (used in `hp` and `chance`)

## Top-Level Declarations

Supported top-level blocks/statements:

- `include "path.etf"`
- `sounds { ... }`
- `music { ... }`
- `player { ... }`
- `room <id> { ... }`
- `object <id> { ... }`
- `rule <id> { ... }`

## Rooms

```dsl
room laboratory {
  name "Laboratory"
  image "lab.png"
  desc "A dusty room."
  exit east -> hallway
  exit north -> attic locked true key key "The door is locked."
  contains chair
}
```

Room fields:

- `name "..."` optional
- `image "..."` optional
- `desc "..."` optional
- `exit <direction> -> <targetRoom> [locked <bool> [key <objectId>] ["locked message"]]`
- `contains <objectId>` repeatable

Directions:

- `north`, `south`, `east`, `west`, `up`, `down`

## Objects

```dsl
object locker {
  name "Armadietto"
  desc "A closed metal locker."
  portable false
  container true
  openable true
  locked false
  isOpen false
  contains key
}
```

Object fields:

- `name "..."` optional
- `desc "..."` optional
- `portable <bool>` optional
- `container <bool>` optional
- `openable <bool>` optional
- `locked <bool>` optional
- `isOpen <bool>` optional
- `contains <objectId>` repeatable
- `verbs { ... }` optional (see dedicated section)

## Object Verbs (Embedded Puzzle Logic)

Objects can define local interaction scripts.

### Simple verb

```dsl
verbs {
  leggi {
    do print "Between the pages you read: 'The code is 0421'."
    do set flag knowsCode true
    do sound page
  }
}
```

### Parametric verb with condition and else

```dsl
verbs {
  inserisci <value> {
    if value == "0421"
    do unlock exit hallway north
    do print "Beep. Correct code."
    do sound unlock
    else
    do print "Beep. Wrong code."
  }
}
```

Verb syntax:

- `<verbName> { ... }`
- `<verbName> <variable> { ... }` where variable is declared as `<value>` style

Inside verb body:

- `if <condition>` repeatable
- `do <action>` repeatable
- optional `else` followed by one or more `do <action>`

## Rules

Rules are global scripted behavior.

```dsl
rule unlock_studio {
  when use key on study_door
  if in hallway
  if exitLocked hallway east
  do unlock exit hallway east
  do sound unlock
  do print "Click. The door opens."
}
```

A rule has:

- one `when ...`
- zero or more `if ...`
- one or more `do ...`

## Triggers

Supported `when` forms:

- `when tick`
- `when enter <roomId>`
- `when look <objectId>`
- `when take <objectId>`
- `when use <objectId>`
- `when use <objectId> on <targetObjectId>`
- `when command <commandName> <variable>`

Command trigger example:

```dsl
when command inserisci <value>
```

## Conditions

Supported `if` forms:

- `if chance <int>`
- `if flag <flagId> is <bool>`
- `if in <roomId>`
- `if isOpen <objectId> <bool>`
- `if has <objectId>`
- `if exitLocked <roomId> <direction>`
- `if <variable> == "text"`
- `if <variable> != "text"`

Examples:

```dsl
if chance 15
if flag raining is true
if value == "0421"
```

## Actions

Supported `do` forms:

- `do print "..."`
- `do set flag <flagId> <bool>`
- `do open <objectId>`
- `do unlock exit <roomId> <direction>`
- `do spawn <objectId> in <roomId>`
- `do sound <soundId>`
- `do playMusic <musicId>`
- `do stopMusic`

## Audio: Sounds and Music

### Sounds

```dsl
sounds {
  unlock = "unlock.wav"
  door = "door_creak.wav"
  coin = "coin_drop.wav"
}
```

Usage:

```dsl
do sound unlock
```

### Music

```dsl
music {
  lab = "lab_theme.ogg"
  rain = "rain_loop.ogg"
}
```

Usage:

```dsl
do playMusic lab
do stopMusic
```

## Includes

```dsl
include "common/items.etf"
```

Current behavior:

- parser stores include paths in AST
- parser does not automatically load/merge include files
- validator can downgrade some missing-reference issues to warnings when includes exist (because referenced IDs may come from included files at runtime merge stage)

## Player Semantics

```dsl
player {
  start laboratory
  gives key
  hp 20
}
```

Semantics (current v0.1):

- `player.start` overrides `game ... start ...` when present
- if `player.start` missing, fallback is `game.start`
- `player.gives <objectId>`:
  - object must exist
  - if the same object is already placed in world (`contains` chains), validator reports conflict (`ETD020`)

## Spawn Semantics (v0.1)

`spawn` assumes unique object IDs (no cloning/prototypes yet).

```dsl
do spawn coin in laboratory
```

Intended v0.1 behavior:

- if object exists and is not currently placed, place it in target room
- if object is already in world, treat as move/reposition

## Comments

Supported comments:

- hash line comment:
  - `# this is a comment`
- slash line comment:
  - `// this is a comment`
- block comment:
  - `/* multiline comment */`

Parser notes:

- comments are ignored before parsing
- comments inside string literals are preserved as text
- unterminated `/* ...` raises parse error

## Validation and Diagnostics

Current validator checks cross-references and semantic consistency.

Main codes:

- `ETD001` unknown object
- `ETD002` unknown room
- `ETD003` unknown sound
- `ETD004` unknown music
- `ETD020` `player.gives` object already placed in world
- `ETD030` invalid chance (must be `1..100`)
- `ETD040` value comparison used without command variable context
- `ETD041` compared variable mismatch vs declared command variable

Diagnostics include severity (`Warning`/`Error`) and optional source location (`line`, `column`).

## How To: Build a Story from Scratch

This is the recommended complete workflow for a first story.

### 1. Define game header and includes

```dsl
game "The Crooked House" start laboratory
include "common/items.etf"
```

### 2. Declare audio resources

```dsl
sounds {
  unlock = "unlock.wav"
  page = "page.wav"
}

music {
  lab = "lab_theme.ogg"
  rain = "rain_loop.ogg"
}
```

### 3. Define player bootstrap

```dsl
player {
  start laboratory
  gives key
  hp 20
}
```

### 4. Build map with rooms and exits

```dsl
room laboratory {
  name "Laboratory"
  image "lab.png"
  desc "A dusty room."
  exit east -> hallway
  contains diary
}

room hallway {
  name "Hallway"
  desc "Long and silent."
  exit west -> laboratory
  exit north -> studio locked true key key "The door is locked."
}

room studio {
  name "Study"
  desc "Papers everywhere."
}
```

### 5. Define objects and optional local verbs

```dsl
object diary {
  name "Diary"
  desc "A dusty diary."
  portable true

  verbs {
    leggi {
      do print "Between the pages you read: 'The code is 0421'."
      do set flag knowsCode true
      do sound page
    }
  }
}
```

### 6. Define global rules for progression

```dsl
rule unlock_studio {
  when use key on study_door
  if in hallway
  if exitLocked hallway north
  do unlock exit hallway north
  do sound unlock
  do print "Click. The door opens."
}
```

### 7. Add ambient/random narrative effects

```dsl
rule rain_starts {
  when tick
  if in hallway
  if flag raining is false
  if chance 3
  do set flag raining true
  do playMusic rain
  do print "Somewhere, it starts raining."
}
```

### 8. Add command-driven puzzles

```dsl
rule keypad_ok {
  when command inserisci <value>
  if in hallway
  if value == "0421"
  do unlock exit hallway north
  do print "Beep. Correct code."
}

rule keypad_fail {
  when command inserisci <value>
  if in hallway
  if value != "0421"
  do print "Beep. Wrong code."
}
```

### 9. Validate aggressively

Always validate after edits:

- unknown IDs
- room/object links
- sound/music IDs used by actions
- chance bounds
- command variable consistency

### 10. Keep v0.1 constraints in mind

- objects are unique by ID
- spawn is move/place semantics, not clone
- includes are declared but merge behavior is external

## Complete Example

```dsl
game "The Crooked House" start laboratory
include "common/items.etf"

sounds {
  unlock = "unlock.wav"
  page = "page.wav"
}

music {
  lab = "lab_theme.ogg"
  rain = "rain_loop.ogg"
}

player {
  start laboratory
  gives key
  hp 20
}

room laboratory {
  name "Laboratory"
  desc "A dusty room."
  exit east -> hallway
  contains diary
}

room hallway {
  name "Hallway"
  desc "Long and silent."
  exit west -> laboratory
  exit north -> studio locked true key key "The door is locked."
}

room studio {
  name "Study"
  desc "Papers everywhere."
}

object diary {
  name "Diary"
  desc "A dusty diary."
  portable true
  verbs {
    leggi {
      do print "Between the pages you read: 'The code is 0421'."
      do set flag knowsCode true
      do sound page
    }
  }
}

object keypad_door {
  name "Keypad Door"
  desc "A door with a numeric keypad."
  portable false
  verbs {
    inserisci <value> {
      if value == "0421"
      do unlock exit hallway north
      do print "Beep. Correct code."
      do sound unlock
      else
      do print "Beep. Wrong code."
    }
  }
}

rule ambience {
  when tick
  if chance 15
  do print "The house seems to breathe in silence."
}
```

## Current Limits and Future Extensions

Not implemented yet (suggested future roadmap):

- object prototypes + cloning (`spawn coin count 3`)
- built-in include file resolution/merge in parser layer
- richer expression engine (`and/or`, numeric comparisons, arithmetic)
- explicit inventory manipulation actions
- stricter static checks for duplicate declarations
