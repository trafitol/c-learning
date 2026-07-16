#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	if(argc != 2){
	fprintf(stderr, "Usage: %s \"<message>\"\n",argv[0]);
	return 1;
	}

	FILE *fp = fopen ("log.txt", "a");
	if (fp==NULL){
	fprintf (stderr, "Could not open log.txt\n");
	return 1;
	}

	time_t now = time(NULL);

	fprintf (fp, "[%ld] %s\n", now, argv[1]);

	fclose(fp);
	printf("Logged: %s\n", argv[1]);
	return 0;
}
