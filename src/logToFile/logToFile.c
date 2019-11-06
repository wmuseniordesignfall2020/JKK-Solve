/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/
#include <stdio.h>
#include "../includes/logToFile.h"

/**
* Logs a message to a file - logToFile.txt
*/
int logToFile(char * message) {

	FILE * fp;
	
    // Function fopen opens a file to append a message to. 
	fp = fopen("logToFile.txt", "a"); 

	// Function fprintf logs a message to stream. 
	fprintf(fp, "%s\n", message);

	// Close file when done appending. 
	fclose(fp);
	
	return 0;
}