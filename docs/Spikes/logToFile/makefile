	
CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

all: logToFile

debug: CCFLAGS += DDEBUG -g
debug: logToFile

logToFile.o: logToFile.c 
	$(CC) $(CCFLAGS) -c logToFile.c

clean:
	-rm -rf logToFile.o
run: logToFile
		./logToFile
