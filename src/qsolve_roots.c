/* Quadratic Equationy
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "./includes/qsolve_roots.h"
#include <string.h>

int main(){
char * input;

char buff[100];
char read_line_buff[1024];
char message[1024];

n = 100;
a = 0.0;
b = 0.0;
c = 0.0;

int quit = 1;
int log  = 0;
int help = 0;
int ret  = 0;

root_1 = 0.0;
root_2 = 0.0;

buffer = malloc(sizeof(char) * 100);
count = 1;

if(log) logToFile("------------------ Quadratic Solver ------------------\n");
if(log) logToFile("TEAM: Ibrahim Itani, Ryan Cwynar, Noah Wochaski, Spencer Hunt\n");

printf("------------------ Quadratic Solver v1.1.0 ------------------\n");
printf("TEAM: Ibrahim Itani, Ryan Cwynar, Noah Wochaski, Spencer Hunt\n");
printf("\tType log to enable or disable logging\n");

// While the user doesn't input "q" the program will continue to run
while(quit != 0) {
	//reset help switch
	help = 0;

	//Get input each for each run of the program
	input = getIt();

 	 //If user inputs q to quit program h to help or l to log
	if ((strncmp(input, "q", 1)) == 0){
		//Quit Enabled
		quit=0;
	} else if ((strncmp(input, "h", 1)) == 0){
		//Help Enabled
		help= 1;
	} else if ((strncmp(input, "l", 1)) == 0) {
		//Logging Enabled/Disabled
		log = 1-log;
		if (log) printf("Logging is now enabled!\n");
		else printf("Logging is now disabled!\n");
	}

	//If the user inputs "h" example input will be displayed.
	if (help){
 		printf("Example input:\n 1.2200 3.3400 2.2800 (ensure these are separated by spaces)\nThen press enter. Roots will be calculated and reported here.\n"); 
	} else if (quit != 0) {
		//If they don't want help, print the tests
		sprintf(buff, "\nTest %d:", count);
		if(log) logToFile(buff);
		if(log) logToFile("============\n");

		 // Read line function.
        	if(log) logToFile("\tgetIt Function: ");
        	if(log) logToFile("\t===================");
    		sprintf(read_line_buff, "\tLine read from user: %s", input);
		if(log) logToFile(read_line_buff);

		// Validatation function.
        	if(log) logToFile("\tvalidation Function: ");
        	if(log) logToFile("\t=======================");

		// If we just enabled logging don't try to validate just set to invalid (-1)
        	if ((strncmp(input,"l",1) != 0)) ret = validation(input, n, &a, &b, &c);
		else ret = -1;

		// Check if the flag is valid.
        	if (ret == -1) {
			// Log the result of validate line function to file.
            		if(log) logToFile("\tInput is invalid!\n");
		} else {
            		// Log result of validate line to file.
            		if(log) logToFile("\tInput is valid!\n");

            		sprintf(message, "\tCoefficients: [a] = %.7lf, [b] =  %.7lf, and [c] %.7lf\n", a, b, c);

             		if(log) logToFile(message);

             		//Q Solve Function
             		if (log) logToFile("\tqsolve Function: ");
             		if (log) logToFile("\t=================");

        		// Check if q_solve returned an error
        		if (qsolve(a, b, c, &root_1, &root_2, &solution) != 0) {
            			if (log) logToFile("\tOperation failed!");
            			return -1;
        		} else {
            			if (log) logToFile("\tTest Done.\n");

            			// format function. 
            			if (log) logToFile("\n\tformat Function: ");
            			if (log) logToFile("\t====================="); 

            			// Struct to store results of roots that will be sent to format and printIt functions.
            			struct out_args final_args;

				final_args.a = a;
            			final_args.b = b;
            			final_args.c = c;

				final_args.root_1 = root_1;
            			final_args.root_2 = root_2;

				final_args.solution = solution;

	            		if (format(&final_args) != 0) {
                			if (log) logToFile("\tTest failed!");
                			return -1;
				} else {
					if (log) logToFile("\tTest was successful!");
        			}

	    			// Format function.
            			if (log) logToFile("\n\tPrintIt Function: ");
            			if (log) logToFile("\t=================");
				if (printIt(final_args.output) != 0){
                			if (log) logToFile("\tTest failed!");
                			if (log) logToFile(final_args.output);
                        		return -1;
            			} else {
                			if (log) logToFile("\tTest was successful!");
            			}
			}//end of validate Else
		}//End of Qsolve Else
	}//End of Help Else
	printf("------------------------------------------------------------\n");
	// Incrementing the number of tests.
	count++;
} //End of Quit While
printf("\nQuit succesfully!\n");
if (log) logToFile("\nQuit successfully!\n");

// Free buffer memory.
free(buffer);

return 0;
}
