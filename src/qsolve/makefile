CC = gcc
HEADER = ../includes/qsolve.h
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g

qsolve.o: qsolve.c $(HEADER)
	$(CC) $(CCFLAGS) -c qsolve.c -lm

clean:
	-rm -rf qsolve.o
