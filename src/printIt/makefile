CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: printIt

printIt.o: printIt.c printIt.h
	$(CC) $(CCFLAGS) -c printIt.c

clean:
	-rm -rf printIt.o
