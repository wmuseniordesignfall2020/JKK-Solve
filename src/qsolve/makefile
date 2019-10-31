CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g

qsolve.o: qsolve.c qsolve.h
	$(CC) $(CCFLAGS) -c qsolve.c -lm

clean:
	-rm -rf qsolve.o
