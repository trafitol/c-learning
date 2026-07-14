#include <stdio.h>

int main (void)
{
int arr[7]={7,6,2,5,4,3,1};
int sorted=1;

for (int i=0;i<7;i++){
	if (arr[i]>arr[i+1]){
	sorted=1;
}
else{
sorted = 0;
}
}

if(sorted == 1){
printf("sorted: yes\n");
}
else{
printf ("sorted: no\n");
return 0;
}
}
