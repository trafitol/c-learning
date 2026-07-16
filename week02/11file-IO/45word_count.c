#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	FILE *fp = fopen("input.txt", "r");
	if (fp == NULL){
	fprintf(stderr, "Could not open input.txt\n");
	return 1;
	}

	int word_count = 0;
	char buffer [100];

	while (fscanf(fp, "%99s", buffer) ==1){
	word_count++;
	}

	fclose(fp);
	printf("Word count: %d\n", word_count);
	return 0;
}
