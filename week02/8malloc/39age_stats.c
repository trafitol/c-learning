#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("How many ages? ");
    scanf("%d", &n);

    int *ages = malloc(sizeof(int) * n);
    if (ages == NULL) { 
	fprintf(stderr,"Allocation failed\n");
	return 1;
 }

for (int i=0;i<n;i++){
	printf("Age %d:",i+1);
	scanf("%d",&ages[i]);
}

int total = ages[0];
int min = ages[0];
int max = ages[0];

for (int i=1;i<n;i++){
	total = total + ages[i];
	if (ages[i] < min){
	min = ages[i];
	}
	if (ages[i] > max){
	max = ages[i];
	}
}

    printf("Sum: %d\n", total);
    printf("Average: %.2f\n", (float)total / n);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    free(ages);
    ages = NULL;
    return 0;
}
