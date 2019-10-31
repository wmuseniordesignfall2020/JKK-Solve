//get user input

#include <stdlib.h>
#include <stdio.h>
#include "../includes/getIt.h"

char *getIt(){
    char *input = malloc(sizeof(char) * 100);

    printf("Enter the values for a, b and c of the quadratic equation [q to quit program]: ");

    fgets(input, sizeof(char) * 100, stdin);

    return input;
}
