CC = gcc
CCFLAGS = -Wall -pedantic -std=c99
LIBS = -lm

qsolve_roots : qsolve_roots.c getIt/getIt.o validate/validate.o qsolve/qsolve.o format/format.o printIt/printIt.o logToFile/logToFile.o
	$(CC) $(CCFLAGS) -c qsolve_roots.c;
	$(CC) $(CCFLAGS) -o qsolve_roots qsolve_roots.o getIt/getIt.o validate/validate.o format/format.o qsolve/qsolve.o printIt/printIt.o logToFile/logToFile.o $(LIBS)

build:	quad_solver
	@cd getIt; make getIt.o; cp getIt.o ../../build;
	@cd getIt; make printIt.o; cp printIt.o ../../build;
	@cd qsolve; make qsolve.o; cp qsolve.o ../../build;
	@cd format; make format.o; cp format.o ../../build;
	@cd logToFile; make logToFile.o; cp logToFile.o ../../build;

clean:
	rm -f *.o core qsolve_roots
	rm -f *.o core format.o
	rm -f *.o core getIt.o
	rm -f *.o core printIt.o
	rm -f *.o core qsolve.o
	rm -f *.o core logToFile.o
	rm -f *.o core validate.o
	rm -f *.txt core logToFile.txt

run: qsolve_roots
		./qsolve_roots
