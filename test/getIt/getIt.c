/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include <stdlib.h>
#include <stdio.h>
#include "getIt.h"
#include "../cunit.h" 
#include <string.h> 
//get user input

char *getIt(){
    char *input = malloc(sizeof(char) * 100);

    printf("Enter the values for a, b and c of the quadratic equation [q to quit program]: ");

    fgets(input, sizeof(char) * 100, stdin);

    return input;
}


/**
 * Test case environment
 * */
int main() {

    cunit_init();

    char * line = getIt();
    
    // if nothing was inserted should assert_neq and return error if line is 0
    assert_neq(line, 1, (int) strlen(line));

    return 0;
}
