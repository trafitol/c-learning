#include <stdio.h>
#include <stdlib.h>

int main (void)
{

	FILE *fp = fopen  ("squares.txt","w");

	if(fp == NULL) {
	fprintf(stderr, "Could not open file");
	return 1;
	}
	for (int i=0;i<=10;i++){
	fprintf(fp, "%d\n",i*i);
	}
	fclose (fp);
	printf("written values in squares.txt\n");

	printf("\n Reading back values\n");

	fp = fopen("squares.txt", "r");
	if(fp == NULL){
	fprintf(stderr, "Could not read file");
	return 1;
	}
	int val;
	while (fscanf(fp,"%d",&val)==1){
	printf("%d\n",val);
	}
	fclose (fp);
	return 0;
}

