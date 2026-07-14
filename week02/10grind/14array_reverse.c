#include <stdio.h>

int main (void)
{
int arr[7]={1,2,3,4,5,6,7};
int size=7;

printf("original: ");

for (int i=0;i<size;i++){
	printf("%d",arr[i]);
}
printf("\n");

printf("reversed: ");
for (int i=0;i<size/2;i++){
	int tmp = arr[i];
	arr[i] = arr[size-1-i];
	arr[size-1-i] = tmp;
}
for (int i=0;i<size;i++){
	printf("%d",arr[i]);
}
printf("\n");
return 0;
}


