CC = gcc
CFLAGS = -Wall -lm
RM = rm -f 

%.o: %.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o
