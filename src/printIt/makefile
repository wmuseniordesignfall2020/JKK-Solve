CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: printIt

log_output.o: printIt.c printIt.h
	$(CC) $(CCFLAGS) -c printIt.c

clean:
	-rm -rf printIt.o
