	
CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

all: format

debug: CCFLAGS += DDEBUG -g
debug: format

printIt.o: format.c fortmat.h
	$(CC) $(CCFLAGS) -c format.c

clean:
	-rm -rf format.o
