#include <stdio.h>

int main(void)
{
int arr[10]={1,9,6,554,98,321,687,354,229,9854};
int min=arr[0];

for(int i=0;i<10;i++){
	if (arr[i]<min){
min = arr[i];
}}
printf("min: %d\n",min);
return 0;
}
