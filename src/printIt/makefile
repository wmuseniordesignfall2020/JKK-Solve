CC = gcc
HEADER = ../includes/printIt.h
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: printIt

printIt.o: printIt.c $(HEADER)
	$(CC) $(CCFLAGS) -c printIt.c

clean:
	-rm -rf printIt.o
