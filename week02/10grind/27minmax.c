#include <stdio.h>

void findminmax(int arr[], int size, int *min, int *max){
	*min = arr[0];
	*max = arr[0];

for (int i=1;i<size;i++){
	if(arr[i] < *min){
	*min = arr[i];
}	if(arr[i] > *max){
	*max = arr[i];
	} 
    }
}


int main (void)
{
int ar[10]={9,8,6,5,3,2,1,7,10,4};
int x,y;

findminmax(ar,10,&x,&y);

printf("min = %d\n",x);
printf("max = %d\n",y);
return 0;
}
