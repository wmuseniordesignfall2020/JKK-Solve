/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "../includes/qsolve.h"
#include "../includes/logToFile.h"
#include "../includes/validate.h"

int qsolve(float a, float  b, float c, float *root_1, float *root_2, int *solution) {
    float temproot;
    double d;

    d = b * b - 4 * a * c;

    if(d < 0){
      *solution = 0;

      *root_1 = -(b+((b>1)-(b<1)) * sqrt(d))/(2*a);
      *root_2 = c/(a * *root_1);

      isNaN(&a, &b, &c, root_1, root_2);

      isInfinity(&a, &b, &c, root_1, root_2);

      isNormal(&a, &b, &c, root_1, root_2);

      isSubNormal(&a, &b, &c, root_1, root_2);

      return 0;
   } else if(d==0) {
  	*solution = 1;

	//sqrt will cast to doubles before performing operation
 	*root_1 = -b/2.0/a;

 	*root_2 = -b/2.0/a;;

	isNaN(&a, &b, &c, root_1, root_2);

	isInfinity(&a, &b, &c, root_1, root_2);

	isNormal(&a, &b, &c, root_1, root_2);

	isSubNormal(&a, &b, &c, root_1, root_2);

	return 0;
} else {
  	*solution = 2;

	*root_1 = -(b+((b>1)-(b<1)) * sqrt(d))/(2*a);

	*root_2 = c/(a * *root_1);

        // Run the IEEE-FP functions for input/output validation
    	isNaN(&a, &b, &c, root_1, root_2);

        isInfinity(&a, &b, &c, root_1, root_2);

        isNormal(&a, &b, &c, root_1, root_2);

        isSubNormal(&a, &b, &c, root_1, root_2);
}
return 0;
}
