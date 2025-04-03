CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = rush-02.c source.c
EXEC = rush-02

all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)

.PHONY: all clean
