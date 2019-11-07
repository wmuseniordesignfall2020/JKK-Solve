/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "../includes/qsolve.h"
#include "../includes/logToFile.h"
#include "../includes/validate.h"

int qsolve(float a, float b, float c, float *root_1, float *root_2, int *solution) {
    
    float d;
    d = b * b - 4 * a * c;
    
    if(d < 0){
      *solution = 0;
      *root_1 = -b/(2*a) + sqrt(-d)/(2*a);
      *root_2 = -b/(2*a) - sqrt(-d)/(2*a);
      isNaN(&a, &b, &c, root_1, root_2);
    
    isInfinity(&a, &b, &c, root_1, root_2);

    isNormal(&a, &b, &c, root_1, root_2);

    isSubNormal(&a, &b, &c, root_1, root_2);
     	 //printf("Roots are complex number.\n");
      //printf("Roots of quadratic equation are: ");
      //printf("%.3fi",*root_1);
      //printf(", %.3fi",*root_2);
      return 0;
      }
else if(d==0){
  *solution = 1;
 //printf("Both roots are equal.\n");

 *root_1 = -b /(2* a);

 *root_2 = -b /(2* a);

 isNaN(&a, &b, &c, root_1, root_2);
    
isInfinity(&a, &b, &c, root_1, root_2);

isNormal(&a, &b, &c, root_1, root_2);

isSubNormal(&a, &b, &c, root_1, root_2);
// printf("Root of quadratic equation is: %.3f ", *root_1);

 return 0;
}
else{
  *solution = 2;
// printf("Roots are real numbers.\n");

 *root_1 = ( -b + sqrt(d)) / (2* a);
 *root_2 = ( -b - sqrt(d)) / (2* a);
 
    // Run the IEEE-FP functions for input/output validation
    isNaN(&a, &b, &c, root_1, root_2);
    
    isInfinity(&a, &b, &c, root_1, root_2);

    isNormal(&a, &b, &c, root_1, root_2);

    isSubNormal(&a, &b, &c, root_1, root_2);

//printf("Roots of quadratic equation are: %.3f , %.3f",*root_1, *root_2);
}
    return 0;
    
    }
