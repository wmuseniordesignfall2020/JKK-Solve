CC = gcc
CCFLAGS = -Wall -pedantic -std=c99 

testGetIt: getIt.c ../cunit.o
	$(CC) $(CCFLAGS) -c getIt.c;
	$(CC) $(CCFLAGS) -o testGetIt getIt.o ../cunit.o;
	mv getIt.o ../testRuns;
	mv ../cunit.o ../testRuns;
	mv testGetIt ../testRuns

run:
	../test-runs/testGetIt

clean:
	rm -rf ../testRuns/getIt.o;
	rm -rf ../testRuns/testGetIt;
	rm -rf ../testRuns/cunit.o;
	