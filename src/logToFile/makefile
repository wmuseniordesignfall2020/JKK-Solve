CC = gcc
HEADER = ../includes/logToFile.h
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: logToFile

logToFile.o: logToFile.c $(HEADER)
	$(CC) $(CCFLAGS) -c logToFile.c

clean:
	-rm -rf logToFile.o