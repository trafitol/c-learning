#include <stdio.h>

// This function takes a function pionter as a parameter
void apply_to_all(int arr[], int size, int(*fn)(int))
{
	for (int i=0;i<size;i++){
	arr[i] = fn(arr[i]);
	}
}

//some functions we might pass
int double_it(int n)	{return n*2;}
int square_it(int n)    {return n*n;}
int negate_it(int n)    {return -n;}

int main (void)
{
	int nums[5]={1,2,3,4,5};

	apply_to_all(nums,5,double_it);
	for(int i = 0; i< 5; i++)	printf("%d ", nums[i]);
	printf("\n");

    	apply_to_all(nums, 5, square_it);
    	for (int i = 0; i < 5; i++) 	printf("%d ", nums[i]);
    	printf("\n");

    	apply_to_all(nums, 5, negate_it);
    	for (int i = 0; i < 5; i++) printf("%d ", nums[i]);
    	printf("\n");   // -4 -16 -36 -64 -100

	return 0;
}
