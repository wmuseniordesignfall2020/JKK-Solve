//Validate Input
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../includes/validate.h"
#include "../includes/printIt.h"
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

int isNaN(float *a, float *b, float *c, float *root_1, float *root_2) {
  // check if the answer is not a number
  if (fpclassify(*a) == FP_NAN || fpclassify(*b) == FP_NAN || fpclassify(*c) == FP_NAN) {
      printIt("\tCoefficients contain values that are not a number");
  }

  if (fpclassify(*root_1) == FP_NAN || fpclassify(*root_2) == FP_NAN) {
      printIt("\tRoots contains values that are not a number");
  }
  return 0;
}

int isInfinity(float *a, float *b, float* c,float *root_1, float *root_2) {
  // check if the answer is infinite
  if (fpclassify(*a) == FP_INFINITE || fpclassify(*b) == FP_INFINITE || fpclassify(*c) == FP_INFINITE) {
      printIt("\tCoefficients contain ±infinity.");
  }

  if (fpclassify(*root_1) == FP_INFINITE || fpclassify(*root_2) == FP_INFINITE) {
      printIt("\tRoots contain ±infinity");
  }
  return 0;
  
  }

  int isSubNormal(float *a, float *b, float *c, float *root_1, float *root_2) {
  // checks if the answer is normal (Not NAN)
  if (fpclassify(*a) == FP_SUBNORMAL || fpclassify(*b) == FP_SUBNORMAL || fpclassify(*c) == FP_SUBNORMAL) {
      printIt("\tCoefficients contain subnormal values.");
  }

  if (fpclassify(*root_1) == FP_SUBNORMAL || fpclassify(*root_2) == FP_SUBNORMAL) {
    printIt("\tRoots are too small to be represented in normalized format.");
  }
  return 0;
}

int isNormal(float *a, float *b, float *c, float *root_1, float *root_2) {
  // checks if the answer is normal (Not NAN)
  if (fpclassify(*a) == FP_NORMAL && fpclassify(*b) == FP_NORMAL && fpclassify(*c) == FP_NORMAL) {
      printIt("\tCoefficients contain normal values.");
  }

  if (fpclassify(*root_1) == FP_NORMAL && fpclassify(*root_2) == FP_NORMAL) {
    printIt("\tRoots are normal floating-point numbers.");
  }
  return 0;
}

int validation(char * line, int n, float * a, float * b, float * c) {

// check if line is empty using
int value  = isEmpty(line);
char * new_line = removeWhiteSpaces(line);

if (value) {
    printIt("\tNo Input. Please provide numeric values for a, b, and c.\n");
    printIt("\n------------------------------------------------------------\n");
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
    printIt("\tMissing arguments. Please provide numeric values for a, b, and c.\n");
    printIt("\n------------------------------------------------------------\n");
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
        printIt("\tCoefficient a = 0. The solution is undefined\n");
        printIt("\n------------------------------------------------------------\n");
        return -1;
    }

}

else {

    return -1;
}

return 0;
}
