CC = gcc
CCFLAGS = -Wall -pedantic -std=c99 
LIBS = -lm

testFormat: format.c ../cunit.o
	$(CC) $(CCFLAGS) -c format.c ;
	$(CC) $(CCFLAGS) -o testFormat format.o ../cunit.o $(LIBS)
	mv format.o ../testRuns;
	mv ../cunit.o ../testRuns;
	mv testFormat ../testRuns

run:
	../testRuns/testFormat

clean:
	rm -rf ../testRuns/format.o;
	rm -rf ../testRuns/testFormat;
	rm -rf ../testRuns/cunit.o