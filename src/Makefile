CC=gcc
CFLAGS=-I ./inc/ -Wall -nostdlib -lgcc

all: *.c
	# $(CC) $(CFLAGS) -c ctype.c
	# $(CC) $(CFLAGS) -c math.c
	# $(CC) $(CFLAGS) -c string.c
	# $ ar rcs mouselib.a *.o
	gcc -Wall  $(CFLAGS) -shared -fPIC -o mouselib.so math.c

file:
	ar -t mouselib.a

clean:
	rm -f *.o *.a