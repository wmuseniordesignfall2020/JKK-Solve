CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

# Compiles the program. Stores the object files in /build and executable in /src
program:
	@cd src; make build;

# Runs the executable 
run:
	@cd src; ./qsolve_roots;

# Gives the user a list of commands for make
help:
	@cat README.md;

# Compresses the executable into a tar ball
deploy:
	@tar -cvf qsolve_roots.tar qsolve_roots;

# Unit test ALL test functions
test_all: 
	@cd test; cd qsolve; make testQsolve; make run; make clean;
	@cd test; cd getIt; make testGetIt; make run; make clean;
	@cd test; cd validate; make testValidate; make run; make clean;
	@cd test; cd format; make testFormat; make run; make clean; 
	@cd test; cd printIt; make printIt; make run; make clean;

# Unit test for qsolve function
test_qsolve:
	@cd test; cd qsolve; make testQsolve; make run; make clean;

# Unit test for getIt function
test_getIt:
	@cd test; cd getIt; make testGetIt; make run; make clean;

# Unit test for validate function
test_validate:
	@cd test; cd validate; make testValidate; make run; make clean;

# Unit test for format function
test_format:
	@cd test; cd format; make testFormat; make run; make clean;

# Unit tet for printIt function
test_printIt:
	@cd test; cd printIt; make testPrintIt; make run; make clean;

# Cleans all executables, object files, logs, etc.
clean:
	@cd src; make clean;