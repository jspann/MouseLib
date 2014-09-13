CC=gcc
CFLAGS=-I ./inc/ -Wall -nostdlib

all: *.c
	$(CC) $(CFLAGS) -c *.c
	$ ar rcs mouselib.a *.o

clean:
	rm -f *.o *.a