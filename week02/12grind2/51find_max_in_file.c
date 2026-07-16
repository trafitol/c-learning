#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	if (argc != 2){
	fprintf(stderr,"unknown file %s\n",argv[0]);
	return 1;
	}

	FILE *fp = fopen(argv[1],"r");

	if(fp == NULL){
	fprintf(stderr,"File not opened %s\n",argv[1]);
	return 1;
	}

	int max;
	int first = 1;
	int val;

	while (fscanf(fp, "%d", &val) == 1) {
    	if (first) {
        max = val;
        first = 0;
    	} else if (val > max) {
        max = val;
    	}
	}
	if (first) {
    	printf("File was empty\n");
	} else {
    	printf("Max: %d\n", max);
	}

	fclose(fp);
	return 0;
}

