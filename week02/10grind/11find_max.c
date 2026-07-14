#include <stdio.h>

int main (void)

{
int arr[10]={1,9,6,554,98,321,687,354,229,9854};
int max=0;

for(int i=1;i<10;i++){
if (arr[i-1]<arr[i]){
max = arr[i];
}
}
printf("max:%d",max);
return 0;
}
