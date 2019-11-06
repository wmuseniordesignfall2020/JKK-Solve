/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/
int isEmpty(char * line);

int isNumber(char * answer);

int isNaN(float * a, float * b, float * c, float *root_1, float *root_2);

int isInfinity(float * a, float * b, float * c, float *root_1, float *root_2);

int isNormal(float * a, float * b, float * c, float *root_1, float *root_2);

int isSubNormal(float * a, float * b, float * c, float *root_1, float *root_2);

int validation(char * line, int n, float * a, float * b, float * c);

char *removeWhiteSpaces(char *string);
