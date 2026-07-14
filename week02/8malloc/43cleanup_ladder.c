#include <stdio.h>
#include <stdlib.h>

int process(int n)
{

	int *a=malloc(sizeof(int)*n);
	if(a==NULL){
	return -1;
	}

	int *b=malloc(sizeof(int)*n);
	if(b==NULL){
	free (a);
	return -1;
	}

	int *c=malloc((size_t)-1);
	if(c==NULL){
	free(a);
	free(b);
	return -1;
	}

	for (int i=0; i<n;i++){
	a[i] = i;
	b[i] = i*2;
	c[i] = a[i] + b[i];
	}

	printf("First 5 values of c: ");
	for (int i=0;i<5 && i < n;i++){
	printf ("%d ", c[i]);
	}
	printf("\n");

	free(c);
	free(b);
	free(a);
	return 0;
}

int main (void)
{
	int result = process(100);
	if(result == 0){
	printf ("Success\n");
	}
	else {
	printf ("Failed\n");
	}
	return 0;
} 
