# -*- Makefile -*-

all: main.o
	gcc main.o -o binary

main.o: main.c
	gcc -Wall -g -O0 -c main.c

clean:
	rm *.o binary