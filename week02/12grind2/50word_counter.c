#include <stdio.h>

int main (int argc, char *argv[])
{
	if (argc != 2){
	fprintf(stderr,"No File %s\n",argv[0]);
	return 1;
}
	FILE *fp = fopen(argv[1],"r");

	if (fp == NULL){
	fprintf(stderr,"Unreadable file %s\n",argv[1]);
	return 1;
	}

	int count=0;
	char buffer[100];

	while(fscanf(fp, "%99s",buffer)==1){
	count++;
	}

	fclose (fp);
	printf("words in %s and count is %d\n",argv[1],count); 
	return 0;
}
