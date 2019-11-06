/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "includes/qsolve_roots.h"
#include "string.h"

/* main method takes input from user*/
int main() {

  n = 100;
  a = 0.0;
  b = 0.0;
  c = 0.0;
  root_1 = 0.0;
  root_2 = 0.0;

  printf("------------------ Quadratic Solver ------------------\n");
  printf("TEAM: Ibrahim Itani, Ryan Cwynar, Noah Wochaski, Spencer Hunt\n");


  buffer = malloc(sizeof(char) * 100);
  count = 1;

  char * input = getIt();

  // if user inputs q to quit program
  int quit = strncmp(input, "q", 1);

   // While the user doesn't input "q" the program will continue to run
    while(quit != 0) {

        // print the tests
        char buff[100];
        sprintf(buff, "\nTest %d:", count);
        printIt(buff);
        printIt("============\n");

        // Read line function.
        printIt("\tgetIt Function: ");
        printIt("\t===================");

        char read_line_buff[1024];
        sprintf(read_line_buff, "\tLine read from user: %s", input);

        printIt(read_line_buff);

        // Validatation function.
        printIt("\tvalidation Function: ");
        printIt("\t=======================");

        // Flag for validatation
        int ret = validation(input, n, &a, &b, &c);

       
        // Check if the flag is valid.
        if (ret == -1) {

            // Log the result of validate line function to file.
            printIt("\tInput is invalid!\n");

        } else {

            // Log result of validate line to file.
            printIt("\tInput is valid!\n");

            char message[1024];
            sprintf(message, "\tCoefficients: [a] = %.7lf, [b] =  %.7lf, and [c] %.7lf\n", a, b, c);

            printIt(message);

             //Q Solve Function
             printIt("\tqsolve Function: ");
             printIt("\t=================");

        // Check if q_solve returned an error
        if (qsolve(a, b, c, &root_1, &root_2, &solution) != 0) {

            printIt("\tOperation failed!");

            return -1;

        } else {

            printIt("\tTest Done.\n");

        }

        }


        // Prompt the user for another set of numbers.

        // Using read line function.
        input = getIt();

        // Checking user prompt value.
        quit = strncmp(input, "q", 1);

        // Incrementing the number of questions.
        count++;
    }
    printIt("\nQuit successfully!\n\n");

    // Free buffer memory.
    free(buffer);

 return 0;
}
