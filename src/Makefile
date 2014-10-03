CC=gcc
CFLAGS=-I ./inc/ -Wall -nostdlib -lgcc

all: *.c
	$(CC) $(CFLAGS) -c *.c
	$ ar rcs mouselib.a *.o

file:
	ar -t mouselib.a

clean:
	rm -f *.o *.a