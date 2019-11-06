/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/
//Validate Input
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "validate.h"
#include "../cunit.h" 
#include "ctype.h"

int isEmpty(char * line) {

  return line[0] == '\n';

}

/* remove white spaces. */
char *removeWhiteSpaces(char *string) {

    char *noWhiteSpaces;

    while (isspace((unsigned char)*string)) {
        string++;
    }

    if (*string == 0) {
        return string;
    }


    noWhiteSpaces = string + strlen(string) - 1;

    while (noWhiteSpaces > string && isspace((unsigned char) *noWhiteSpaces)) {
        noWhiteSpaces--;
    }

    // Write new null terminator
    *(noWhiteSpaces+1) = 0;

    // return result
    return string;
}


int isNumber(char * answer){

  char * ptr;
  double result;

  // check if answer is a number or a character.
  result = strtod(answer, &ptr);

  if (strlen(ptr) > 0) {
    return -1;
  }

  return 0;
}

// IEEE-FP Functions and Validations

int isNaN(float *a, float *b, float *c, float *root_1, float *root_2) {
  // check if the answer is not a number
  if (fpclassify(*a) == FP_NAN || fpclassify(*b) == FP_NAN || fpclassify(*c) == FP_NAN) {
      printf("\tCoefficients contain values that are not a number");
  }

  if (fpclassify(*root_1) == FP_NAN || fpclassify(*root_2) == FP_NAN) {
      printf("\tRoots contains values that are not a number");
  }
  return 0;
}

int isInfinity(float *a, float *b, float* c,float *root_1, float *root_2) {
  // check if the answer is infinite
  if (fpclassify(*a) == FP_INFINITE || fpclassify(*b) == FP_INFINITE || fpclassify(*c) == FP_INFINITE) {
      printf("\tCoefficients contain ±infinity.");
  }

  if (fpclassify(*root_1) == FP_INFINITE || fpclassify(*root_2) == FP_INFINITE) {
      printf("\tRoots contain ±infinity");
  }
  return 0;
  
  }

  int isSubNormal(float *a, float *b, float *c, float *root_1, float *root_2) {
  // checks if the answer is subnormal 
  if (fpclassify(*a) == FP_SUBNORMAL || fpclassify(*b) == FP_SUBNORMAL || fpclassify(*c) == FP_SUBNORMAL) {
      printf("\tCoefficients contain subnormal values.");
  }

  if (fpclassify(*root_1) == FP_SUBNORMAL || fpclassify(*root_2) == FP_SUBNORMAL) {
    printf("\tRoots are too small to be represented in normalized format.");
  }
  return 0;
}

int isNormal(float *a, float *b, float *c, float *root_1, float *root_2) {
  // checks if the answer is normal (Not NAN)
  if (fpclassify(*a) == FP_NORMAL && fpclassify(*b) == FP_NORMAL && fpclassify(*c) == FP_NORMAL) {
      printf("\tCoefficients contain normal values.");
  }

  if (fpclassify(*root_1) == FP_NORMAL && fpclassify(*root_2) == FP_NORMAL) {
    printf("\tRoots are normal floating-point numbers.");
  }
  return 0;
}

int validation(char * line, int n, float * a, float * b, float * c) {

// check if line is empty using
int value  = isEmpty(line);
char * new_line = removeWhiteSpaces(line);

if (value) {
    
    printf("\tNo Input. Please provide numeric values for a, b, and c.\n");
    printf("\n------------------------------------------------------------\n");
    return -1;
}

// splits the string with values
char * numbers = strtok(new_line, " ");
char * results[3];
int i = 0;

// loops through line, tokenizes, and assigns values to char * results
while (numbers != NULL) {
    if (i < 3) {
        results[i++] = numbers;
    }

    numbers = strtok(NULL, " ");
}

// checks if there are no missing arguments
if (i < 3) {
 
    printf("\tMissing arguments. Please provide numeric values for a, b, and c.\n");
    printf("\n------------------------------------------------------------\n");
    return -1;
}

// tokenizes the string
results[2] = strtok(results[2], "\n");

// checks if numbers are all valid
int value1 = isNumber(results[0]);
int value2 = isNumber(results[1]);
int value3 = isNumber(results[2]);

if (value1 == 0 && value2 == 0 && value3 == 0) {

    // numbers are valid. Assign them to each variable respectively.
    *a = atof(results[0]);
    *b = atof(results[1]);
    *c = atof(results[2]);
    
    if (*a == 0) {
     
        printf("\tCoefficient a = 0. The solution is undefined\n");
        printf("\n------------------------------------------------------------\n");
        return -1;
    }

} else {
    
    printf("\nInput not a number. Please provide numeric values for a, b, and c.\n\nExamples of valid input:\n10, 122.95, 0.055\n");       
    printf("\n------------------------------------------------------------\n"); 
    return -1;
}

return 0;
}



/* Test case environment */
int main(int argc, char ** argv) {
    
    // initialize the unit testing framework
    cunit_init();

    
    int n = 100;
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    char * line = (char *) malloc(100);

    // TEST 1
    strcat(line, "2017.0e6 2500.0e-5");

    cunit_print("\nTest 1: \nTesting...\nLine: ");
    cunit_print(line);
    cunit_print("\nResult from validation: ");
    int ret = validation(line, n, &a, &b, &c);
    isNaN(&a, &b, &c, root_1, root_2);
    isInfinity(&a, &b, &c, root_1, root_2);
    isNormal(&a, &b, &c, root_1, root_2);
    isSubNormal(&a, &b, &c, root_1, root_2);

    // if they are equal then validation passed, if not then error
    // and unit test did its job.
    assert_eq("\nCUNIT ERROR: Reason...", ret, 0);
    line = "";
    
    // TEST 2
    line = (char *) malloc(100);
    strcat(line, "23123 123123 123232");

    cunit_print("\nTest 2: \nTesting...\nLine: ");
    cunit_print(line);
    cunit_print("\nResult from validation: ");
    ret = validation(line, n, &a, &b, &c);

    isNaN(&a, &b, &c, root_1, root_2);
    isInfinity(&a, &b, &c, root_1, root_2);
    isNormal(&a, &b, &c, root_1, root_2);
    isSubNormal(&a, &b, &c, root_1, root_2);

    // if they are equal then validation passed, if not then error
    // and unit test did its job.
    assert_eq("\nCUNIT ERROR: Reason...", ret, 0);

    // TEST 3
    line = (char *) malloc(100);
    strcat(line, "12.213123 123.1232132 212.2122");
    
    cunit_print("\nTest 3: \nTesting...\nLine: ");
    cunit_print(line);
    cunit_print("\nResult from validation: ");
    ret = validation(line, n, &a, &b, &c);
    
    isNaN(&a, &b, &c, root_1, root_2);
    isInfinity(&a, &b, &c, root_1, root_2);
    isNormal(&a, &b, &c, root_1, root_2);
    isSubNormal(&a, &b, &c, root_1, root_2);


    // if they are equal then validation passed, if not then error
    // and unit test did its job.
    assert_eq("\nCUNIT ERROR: Reason...", ret, 0);

    // free memory when done
    free(line);
    printf("\n\n");

    return 0;
}