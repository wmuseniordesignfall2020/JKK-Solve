CC = gcc
CFLAGS= -Wall -pedantic

qsolve_roots : qsolve_roots.c getIt/getIt.o validate/validate.o qsolve/qsolve.o format/format.o
	$(CC) $(CCFLAGS) -c qsolve_roots.c;
	$(CC) $(CCFLAGS) -o qsolve_roots qsolve_roots.o getIt/getIt.o validate/validate.o format/format.o qsolve/qsolve.o $(LIBS)


clean:
        rm -f *.o core qsolve_roots

run: qsolve_roots
        ./qsolve_roots
