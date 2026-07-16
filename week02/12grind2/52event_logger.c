#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	if(argc != 3){
	fprintf(stderr,"Usage: %s <filename>\n",argv[0]);
	return 1;
	}

	FILE *fp = fopen("log.txt","a");

	if (fp == NULL){
	fprintf(stderr,"Could not open %s\n",argv[1]);
	return 1;
	}

	time_t now = time(NULL);

	fprintf(fp,"[%ld]  %s  %s\n",now, argv[1],argv[2]);
	fclose(fp);
return 0;
}

