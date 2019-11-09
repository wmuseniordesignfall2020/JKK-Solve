CC = gcc
HEADER = ../includes/format.h
CCFLAGS = -Wall -pedantic -std=c99

all: format

debug: CCFLAGS += DDEBUG -g
debug: format

format.o: format.c $(HEADER)
	$(CC) $(CCFLAGS) -c format.c

clean:
	-rm -rf format.o
