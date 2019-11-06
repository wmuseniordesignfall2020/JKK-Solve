CC = gcc
CCFLAGS = -Wall -pedantic -std=c99 
LIBS = -lm

testQsolve: qsolve.c ../cunit.o
	$(CC) $(CCFLAGS) -c qsolve.c ;
	$(CC) $(CCFLAGS) -o testQsolve qsolve.o ../cunit.o $(LIBS)
	mv qsolve.o ../testRuns;
	mv ../cunit.o ../testRuns;
	mv testQsolve ../testRuns

run:
	../testRuns/testQsolve

clean:
	rm -rf ../testRuns/qsolve.o;
	rm -rf ../testRuns/testQsolve;
	rm -rf ../testRuns/cunit.o