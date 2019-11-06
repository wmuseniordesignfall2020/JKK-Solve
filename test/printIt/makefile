CC = gcc
CCFLAGS = -Wall -pedantic -std=c99 
LIBS = -lm

testPrintIt: printIt.c ../cunit.o
	$(CC) $(CCFLAGS) -c printIt.c ;
	$(CC) $(CCFLAGS) -o testPrintIt printIt.o ../cunit.o $(LIBS)
	mv printIt.o ../testRuns;
	mv ../cunit.o ../testRuns;
	mv testPrintIt ../testRuns

run:
	../testRuns/testPrintIt

clean:
	rm -rf ../testRuns/printIt.o;
	rm -rf ../testRuns/testPrintIt;
	rm -rf ../testRuns/cunit.o