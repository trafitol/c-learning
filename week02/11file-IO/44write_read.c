#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("numbers.txt", "w");
	if (fp == NULL){
		fprintf(stderr, "Could nog open for write\n");
		return 1;
	}

	for (int i=1; i<=5;i++){
	fprintf (fp, "%d\n", i*i);
	}

	fclose(fp);
	printf("Wrote numbers.txt\n");

	fp = fopen ("numbers.txt", "r");
	if (fp == NULL){
	fprintf(stderr,"Could not open for read\n");
	return 1;
	}

	printf("Reading back:\n");
	int val;
	while (fscanf(fp, "%d",&val) ==1) {
	printf (" %d\n", val);
	}

	fclose(fp);
	return 0;

}
