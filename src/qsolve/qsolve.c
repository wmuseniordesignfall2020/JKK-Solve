#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "../includes/qsolve.h"
#include "../includes/printIt.h"
#include "../includes/validate.h"


int qsolve(float a, float b, float c, float *root_1, float *root_2, int *solution) {
  // variable declaration
  float d;
  // calculate the Discriminant
  d = (b * b) - (4 * a * c);
  // chack if Discriminant is positive, and a Real-Number solution.

  if (d > 0) {

    printf("\tTwo real root solutions.\n");

    // Set solution for formating.
    *solution = 1;

    // Calculate solution of both roots.
    *root_1 = (-b + sqrt(d)) / (2 * a);
    *root_2 = (-b - sqrt(d)) / (2 * a);
    
    isNaN(&a, &b, &c, root_1, root_2);
    
    isInfinity(&a, &b, &c, root_1, root_2);
        

    printf("\tRoots of quadratic equation are %.7f and %.7f\n",  root_1[0], root_2[0]);
  }
  // if Discriminant is Zero, then ther is One Real Double Root Solution.

  else if (d == 0) {

    printf("\tReal double root solution.\n");
    // Set solution for formating
     *solution = 2;
     // Calculate Single Double Root Solution
     *root_1 = -b / (2 * a);
     *root_2 = -b / (2 * a);

     printf("\tRoot of quadratic equation is ±%.7f\n", root_1[0]);
      return 0;
     }

     // Discriminant is Negative, then it's a Complex Number Solution.
     else {

       printf("\tComplex root, No real solution\n");

 	    // Set solution for formating
 	    *solution = 0;

         return 0;
     }
 return 0;
}
