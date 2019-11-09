CC = gcc
HEADER = ../includes/getIt.h
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: getIt

getIt.o: getIt.c $(HEADER)
	$(CC) $(CCFLAGS) -c getIt.c -lm

clean:
	-rm -rf getIt.o
