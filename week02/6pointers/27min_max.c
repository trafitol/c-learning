#include <stdio.h>

void find_min_max(int arr[], int size, int *min, int *max)
{
	*min = arr[0];
	*max = arr[0]; 


for (int i= 1; i<size; i++){
	if (arr[i]<*min){
	   *min = arr[i];
	}
	if (arr[i]>*max){
	   *max = arr[i];
	}
    }
}

int main (void)
{
int values[10] = {12,4,9,21,3,17,8,25,11,6};
int lo, hi;

find_min_max(values,10,&lo,&hi); 
printf("Low value of array = %d\n",lo);
printf("High value of array = %d\n",hi);
return 0;

}
