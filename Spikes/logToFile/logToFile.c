#include <stdio.h>

int main(void) {
	logToFile("Testing logging to a text file in Spikes");
}

int logToFile(char* message) {
	FILE* fp;

	if ((fp = fopen("logToFile.txt", "a")) == null){
		return -1;
    }
	fprintf(fp, "%s\n", message);
	fclose(fp);
}