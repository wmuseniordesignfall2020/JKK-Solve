CC = gcc
CCFLAGS = -Wall -pedantic -std=c99
LIBS = -lm

qsolve_roots : qsolve_roots.c getIt/getIt.o validate/validate.o qsolve/qsolve.o format/format.o printIt/printIt.o logToFile/logToFile.o
	$(CC) $(CCFLAGS) -c qsolve_roots.c;
	$(CC) $(CCFLAGS) -o ../qsolve_roots qsolve_roots.o getIt/getIt.o validate/validate.o format/format.o qsolve/qsolve.o printIt/printIt.o logToFile/logToFile.o $(LIBS)

build:	qsolve_roots
	@cd getIt; make getIt.o; cp getIt.o ../../build;
	@cd printIt; make printIt.o; cp printIt.o ../../build;
	@cd qsolve; make qsolve.o; cp qsolve.o ../../build;
	@cd format; make format.o; cp format.o ../../build;
	@cd logToFile; make logToFile.o; cp logToFile.o ../../build;
	@cd getIt; make -s getIt.o; cp getIt.o ../../build;
	@cd printIt; make -s printIt.o; cp printIt.o ../../build;
	@cd qsolve; make -s qsolve.o; cp qsolve.o ../../build;
	@cd format; make -s format.o; cp format.o ../../build;
	@cd logToFile; make -s logToFile.o; cp logToFile.o ../../build;
clean:
	rm -f *.o core qsolve_roots
	@cd format;rm -f *.o core format.o
	@cd getIt;rm -f *.o core getIt.o
	@cd printIt;rm -f *.o core printIt.o
	@cd qsolve;rm -f *.o core qsolve.o
	@cd logToFile;rm -f *.o core logToFile.o
	@cd validate; rm -f *.o core validate.o

	rm -f *.txt core logToFile.txt
	@cd ../build; rm -rf logToFile.o;
	@cd ../build; rm -rf getIt.o;
	@cd ../build; rm -rf validate.o;
	@cd ../build; rm -rf qsolve.o;
	@cd ../build; rm -rf format.o;
	@cd ../build; rm -rf printIt.o;

run: qsolve_roots
		../qsolve_roots
