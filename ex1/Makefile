# Quick and dirty script to make all the exercises

BIN_DIR = ./build

CC = clang
CFLAGS = -Wall -Wextra -pedantic -g

# Find all the source file and remove .c from them
SRC := $(wildcard *c)
BIN := $(SRC:.c=)

.PHONY: all
all: $(BIN)
	@echo "Usage: make <filename>.c"
	@echo "OR you can just type \`make all\` to make all the exercises"

# Building the projects
.PHONY: %
%: %.c
	@echo "Building $@"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$* $<

clean:
	rm -f $(BIN_DIR)/$(BIN)
