#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])

{

	if (argc != 2) {
	fprintf(stderr, "Usage %s <filename>\n", argv[0]);
	return 1;
	}

	FILE *fp = fopen(argv[1], "r");
	if (fp == NULL){
	fprintf(stderr,"Could not open %s\n", argv[1]);
	return 1;
	}

	char line [256];
	int line_num=1;

	while (fgets(line, sizeof(line), fp) != NULL){
	printf ("%4d: %s", line_num, line);
	line_num++;
	}
	fclose(fp);
	return 0;
}
