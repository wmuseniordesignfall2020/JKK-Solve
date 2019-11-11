CC = gcc
HEADER = ../includes/validate.h
CCFLAGS = -Wall -pedantic -std=c99 -lm

all: validate

debug: CCFLAGS += DDEBUG -g
debug: validate

validate.o: validate.c $(HEADER)
	$(CC) $(CCFLAGS) -c validate.c

clean:
	rm -rf validate.o
