# JKK-Solve
# Quadratic Solver

## Version: 1.0.0
## Introduction: This project was developed by Ryan Cwynar, Ibrahim Itani, Noah Wochaski, and Spencer Hunt.

Description: This software is a quadratic solver written in C which takes in the inputs of a, b, and c and runs them through the quadratic equation. The output displays the roots x1 and x2 for the following inputs or displays an alternate message indicating whether or not the answer contains complex solutions.

With validation, the program has the functionality to also detect discrepancies within the input of a user and is able to notify them if something entered doesn't meet the expectations of the quad solver. This is done using many of the IEEE-FP32 built-in C functions, displaying the appropriate feedback when certain values are calculated or entered.

The quad solver has additional features such as a logging function that will save the test results of the quad solver for the user to be able to refer back to their previous tests. The logs are accessible once a test has been completed. Users are only able to keep the results of the per time running the quad solver. Once a new instance of the program is run, the new test results will overwrite the logs in an effort to keep space minimal. The logs can be copied to a new file if the user wishes to keep the results of previous instances. Otherwise, the results of previous attempts are permanently removed.

Build Instructions Below:

make program : compiles and builds the program


make clean : deletes all .o files and txt files generated


make deploy : creates a tar file


test_qsolve: runs test for qsolve function


test_getIt: runs test for getIt function


test_validate: runs test for validate function
	

test_format: runs test for format function
	

test_printIt: runs test for printIt function
