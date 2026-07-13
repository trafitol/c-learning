#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n;
	printf("How many numbers?");
	scanf("%d",&n);

	int *nums = malloc(sizeof(int) * n);
	if (nums == NULL) {
	fprintf(stderr,"Allocation failed\n");
	return 1;
	}

	for(int i=0;i<n;i++){
	printf("Number %d:", i+1);
	scanf("%d", &nums[i]);
	}

	int total = 0;
	int min = nums[0];
	int max = nums[0];
	int even_count = 0;



	for(int i=0;i<n;i++){
	 total+=nums[i];
	if (nums[i]<min)min = nums[i];
	if (nums[i]>max)max = nums[i];
	if (nums[i]%2==0)even_count++;
	}

	float average = (float)total / n;

	int above_avg= 0;
	for (int i=0;i<n;i++){
	if (nums[i]>average)above_avg++;
	}

	printf("\nSum = %d\n",total);
	printf("Min = %d\n",min);
	printf("Max = %d\n",max);
	printf("Average = %.2f\n",average);
	printf("Above Average = %d\n",above_avg);
	printf("Even Count = %d\n",even_count);
	
	free(nums);
	nums=NULL;
	return 0;
}
