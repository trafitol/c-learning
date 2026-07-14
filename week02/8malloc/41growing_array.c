#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int capacity = 4;
int count = 0;
int *nums = malloc(sizeof(int) * capacity);
if (nums == NULL) {
	fprintf(stderr, "Initial allocation failed\n");
        return 1;
}

printf("Enter numbers(enter -1 to stop):\n");

int val;
while (1){
	scanf("%d",&val);
	if(val==-1)break;

	if (count == capacity) {
	capacity *= 2;
		int*new_nums = realloc(nums, sizeof(int) *capacity);
		if(new_nums == NULL){
			fprintf(stderr, "realloc failed\n");
			free (nums);
			return 1;
		}
		nums = new_nums;
		printf("(grew capacity to %d)\n", capacity);
	}

	nums[count] = val;
	count++;
}

printf("\nRead %d numbers:\n", count);
for (int i=0; i<count;i++){
	printf("  %d\n",nums[i]);
}
free(nums);
return 0;
}
