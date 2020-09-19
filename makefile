CC = gcc
CFLAGS = -Wall -lm

# Source folder with C files
SRC    := src/2019
# All c files to build
SRCS    := $(wildcard $(SRC)/*.c)

# destination folder for .o files
OBJ    := ./obj
# Build list of .o files to generate ( convert $(SRC)/*.c to $(SRC)/*.o)
OBJS    := $(patsubst $(SRC)/%.c,$(OBJ)/%.o,$(SRCS))

all: $(OBJS)

$(OBJ)/%.o: $(SRC)/%.c
	@ [ -d $(OBJ) ] || mkdir $(OBJ)
	$(CC) $^ $(CFLAGS) -o $@

clean:
	rm -rf $(OBJ)

.PHONY: all