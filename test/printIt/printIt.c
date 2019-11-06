/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/

#include <stdio.h>
#include "printIt.h"

/**
* prints output to the user
*/
int printIt(char * output) {

	int ret;
	
	if ((ret = printf("%s\n", output)) < 0) {
		printf("\tERROR: Failed to output the result of the test\n");
	} else {
		ret = 0;
	}

	char final_output[256];
	snprintf(final_output, sizeof final_output, "\t%s", output);

	printf("%s\n",final_output);
	
	return ret;
}

/**
 * Test case environment
 * */
int main(int argc, char const *argv[]) 
{
	int ret;	// variable for return values
    cunit_init();

    /*TEST 1: Null-terminated string */
    cunit_print("\nTEST 1: Null-terminated string");

    char* str1 = "This is a test string\0";
    ret = printIt(str1);
    cunit_print("\n\tResults: ");
    assert_eq("\n\tCUNIT ERROR: Reason...", ret, 0);

    /*TEST 2: Un-terminated string */
    cunit_print("\nTEST 2: Un-terminated string");

    char* str2 = "This is a test string";
    ret = printIt(str2);
    cunit_print("\n\tResults: ");
    assert_eq("\n\tCUNIT ERROR: Reason...", ret, 0);

    /*TEST 3: empty string */
    cunit_print("\nTEST 3: empty string");

    ret = printIt("");
    cunit_print("\n\tResults: ");
    assert_eq("\n\tCUNIT ERROR: Reason...", ret, 0);

	return 0;
}