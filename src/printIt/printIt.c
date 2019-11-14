/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include <stdio.h>
#include "../../test/cunit.h"
#include "../includes/printIt.h"

/**
* prints output to the user
*/
int printIt(char * output) {

	int ret;
	
	if ((ret = printf("%s\n", output)) < 0) {
		logToFile("\tERROR: Failed to output the result of the test\n");
	} else {
		ret = 0;
	}

	char final_output[256];
	snprintf(final_output, sizeof final_output, "\t%s", output);

	logToFile(final_output);
	
	return ret;
}
