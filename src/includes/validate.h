/* Quadratic Equation
  TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski
*/
int isEmpty(char * line);

int isNumber(char * answer);

int isNaN(double * a, double * b, double * c, double *root_1, double *root_2);

int isInfinity(double * a, double * b, double * c, double *root_1, double *root_2);

int isNormal(double * a, double * b, double * c, double *root_1, double *root_2);

int isSubNormal(double * a, double * b, double * c, double *root_1, double *root_2);

int validation(char * line, int n, double * a, double * b, double * c);

char *removeWhiteSpaces(char *string);
