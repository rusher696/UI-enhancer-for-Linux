
# === OPTIBLAST MAKEFILE ===

CC = gcc
CXX = g++
CFLAGS = -Wall
SRC_DIR = src
BUILD_DIR = build

# Files to build
C_SOURCES = $(SRC_DIR)/hw_boost.c $(SRC_DIR)/input_hook.c
CPP_SOURCES = $(SRC_DIR)/main.cpp

C_OUTPUTS = $(BUILD_DIR)/hw_boost.elf $(BUILD_DIR)/input_hook.elf
CPP_OUTPUT = $(BUILD_DIR)/optiblast_ui.elf

# Default target
all: $(C_OUTPUTS) $(CPP_OUTPUT)

# Rules
$(BUILD_DIR)/hw_boost.elf: $(SRC_DIR)/hw_boost.c
	$(CC) $(CFLAGS) -o $@ $<

$(BUILD_DIR)/input_hook.elf: $(SRC_DIR)/input_hook.c
	$(CC) $(CFLAGS) -o $@ $<

$(BUILD_DIR)/optiblast_ui.elf: $(SRC_DIR)/main.cpp
	$(CXX) $(CFLAGS) -o $@ $<

# Clean everything
clean:
	rm -f $(BUILD_DIR)/*.elf

.PHONY: all clean