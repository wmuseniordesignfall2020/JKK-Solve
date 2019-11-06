CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: getIt

getIt.o: getIt.c getIt.h
	$(CC) $(CCFLAGS) -c getIt.c -lm

clean:
	-rm -rf getIt.o
