# OptiBlast UI Optimizer
OptiBlast is a system-level utility suite written in C/C++ and shell scripts, designed to **optimize UI performance**, disable laggy animations, and give you keyboard-driven control over system tweaks — all from the terminal.

## Components

File | Description

hw_boost.elf        | Runs GPU/UI rendering tweaks
input_hook.elf      | Listens to keyboard keys: press "r" to boost, "q" to quit
optiblast_ui.elf    | Interactive menu-driven UI for all tools
animation_killer.sh | Disables window and transition animations
config_patcher.sh  | Patcher for configurations

## Features

- Terminal input hook (non-blocking)
- GPU rendering enhancement
- Animation scale nuker
- Full Makefile build pipeline
- Portable and open-source
- Fast and lightweight