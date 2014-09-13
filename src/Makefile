CC=gcc
CFLAGS=-I ./include/ -Wall

all: *.c
	$(CC) $(CFLAGS) -c *.c
	$ ar rcs mouselib.a *.o

clean:
	rm -f *.o *.a