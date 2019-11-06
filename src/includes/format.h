/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "logToFile.h"

struct out_args {
	float a; 				
	float b; 				
	float c; 				
	int solution; 			
	float root_1; 			
	float root_2; 			
	char* output; 	
};

int format(struct out_args *args);
