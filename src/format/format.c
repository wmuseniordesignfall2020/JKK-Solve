/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/
#include "../includes/format.h"

int format(struct out_args *args) {

	int ret = 0;
	
	 // allocate space for the output string
	args->output = malloc(500);
	

	// check to see if the solution rounds to 0
	if (args->root_1 <= -0)
	{
		args->root_1 = 0;
	}
	if (args->root_1 <= -0)
	{
		args->root_2 = 0;
	}
	// if the solution is complex, prepare a string stating that for the user
	if (args->solution == 0) {
		
		// if sprintf fails, change the return value to 1
		ret = ((sprintf(args->output, "\nThere is no solution for the coefficients:\n\ta = %f, b = %f, and c = %f", 
			args->a, args->b, args->c)) < 0 ? 1 : 0);
	} 

	// Single Double Root Solution
	else if (args->solution == 1) {
	
		// if sprintf fails, change the return value to 1
		ret = ((sprintf(args->output, "\nThere are two real solutions for coefficients:\n\ta = %f, b = %f, and c = %f\nSolutions:\n\troot 1 = %.7f\n\troot 2 = %.7f",
				args->a, args->b, args->c, args->root_1, args->root_2)) < 0 ? 1 : 0);
	}	

	// Single Double Root Solution
	else if (args->solution == 2) {

		// if sprintf fails, change the return value to 1
		ret = ((sprintf(args->output, "\nThere is a real double root solution for coefficients:\n\ta = %.7f, b = %.7f, and c = %.7f\nSolution:\n\troot 1 = %.7f\n\troot 2 = %.7f",
			args->a, args->b, args->c, args->root_1, args->root_2)) < 0 ? 1 : 0);
	}

	else {
		logToFile("\tERROR: format has passed a solution that is not between 0 and 2");
		
		ret = 1; // solution should only be between 0 and 2
	}

	// Failed to generate output
	if (ret == 1) {
		logToFile("\tERROR: Failed to generate output\n");
	}

	return ret;
}
