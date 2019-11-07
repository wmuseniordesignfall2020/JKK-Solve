CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

debug: CCFLAGS += DDEBUG -g
debug: logToFile

logToFile.o: logToFile.c logToFile.h
	$(CC) $(CCFLAGS) -c logToFile.c

clean:
	-rm -rf logToFile.o