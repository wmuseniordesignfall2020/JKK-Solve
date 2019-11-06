CC = gcc
CCFLAGS = -Wall -pedantic -std=c99 
LIBS = -lm

testValidate: validate.c ../cunit.o
	$(CC) $(CCFLAGS) -c validate.c ;
	$(CC) $(CCFLAGS) -o testValidate validate.o ../cunit.o $(LIBS)
	mv validate.o ../testRuns;
	mv ../cunit.o ../testRuns;
	mv testValidate ../testRuns

run:
	../testRuns/testValidate

clean:
	rm -rf ../testRuns/validate.o;
	rm -rf ../testRuns/testValidate;
	rm -rf ../testRuns/cunit.o
	