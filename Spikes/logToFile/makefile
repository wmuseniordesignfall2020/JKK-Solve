CC = gcc

CFLAGS = -Wall -pedantic -std=c99

all: logToFile_test

debug: CCFLAGS += DDEBUG -g
debug: logToFile_test

logToFile_test:

	$(CC) $(CCFLAGS) logToFile.c -o t