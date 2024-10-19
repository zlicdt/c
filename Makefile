# Makefile

CC := $(shell command -v gcc 2>/dev/null)
ifeq ($(CC),)
$(error "gcc is not installed on this system")
endif

CFLAGS := -Wall -g

EXTRA_DIR := Extra
LAB_DIR := Lab
ASSIGNMENT_DIR := Assignment

EXTRA_BUILD_DIR := $(EXTRA_DIR)/build
LAB_BUILD_DIR := $(LAB_DIR)/build
ASSIGNMENT_BUILD_DIR := $(ASSIGNMENT_DIR)/build

EXTRA_SRCS := $(wildcard $(EXTRA_DIR)/*.c)
LAB_SRCS := $(wildcard $(LAB_DIR)/*.c)
ASSIGNMENT_SRCS := $(wildcard $(ASSIGNMENT_DIR)/*.c)

EXTRA_BINS := $(patsubst $(EXTRA_DIR)/%.c, $(EXTRA_BUILD_DIR)/%, $(EXTRA_SRCS))
LAB_BINS := $(patsubst $(LAB_DIR)/%.c, $(LAB_BUILD_DIR)/%, $(LAB_SRCS))
ASSIGNMENT_BINS := $(patsubst $(ASSIGNMENT_DIR)/%.c, $(ASSIGNMENT_BUILD_DIR)/%, $(ASSIGNMENT_SRCS))

all: help

extra: $(EXTRA_BUILD_DIR) $(EXTRA_BINS)

lab: $(LAB_BUILD_DIR) $(LAB_BINS)

assignment: $(ASSIGNMENT_BUILD_DIR) $(ASSIGNMENT_BINS)

$(EXTRA_BUILD_DIR):
	@mkdir -p $(EXTRA_BUILD_DIR)

$(LAB_BUILD_DIR):
	@mkdir -p $(LAB_BUILD_DIR)

$(ASSIGNMENT_BUILD_DIR):
	@mkdir -p $(ASSIGNMENT_BUILD_DIR)

$(EXTRA_BUILD_DIR)/%: $(EXTRA_DIR)/%.c
	@echo "[CC] $<"
	@$(CC) $(CFLAGS) -o $@ $<

$(LAB_BUILD_DIR)/%: $(LAB_DIR)/%.c
	@echo "[CC] $<"
	@$(CC) $(CFLAGS) -o $@ $<

$(ASSIGNMENT_BUILD_DIR)/%: $(ASSIGNMENT_DIR)/%.c
	@echo "[CC] $<"
	@$(CC) $(CFLAGS) -o $@ $<

clean:
	@echo "[CLEAN] $(EXTRA_BUILD_DIR)"
	@rm -rf $(EXTRA_BUILD_DIR)
	@echo "[CLEAN] $(LAB_BUILD_DIR)"
	@rm -rf $(LAB_BUILD_DIR)
	@echo "[CLEAN] $(ASSIGNMENT_BUILD_DIR)"
	@rm -rf $(ASSIGNMENT_BUILD_DIR)
help:
	@echo "Usage:"
	@echo "  make extra       - Compile all .c files in the Extra directory"
	@echo "  make lab         - Compile all .c files in the Lab directory"
	@echo "  make assignment  - Compile all .c files in the Assignment directory"
	@echo "  make clean       - Clean all build directories"
