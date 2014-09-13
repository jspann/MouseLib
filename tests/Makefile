CC=gcc
CFLAGS=-nostdlib -nostdinc -lSystem -I./../src/inc/

all:
	$(CC) $(CFLAGS) -o test helloTest.c ../src/mouselib.a

clean:
	rm -f *.o milk