#include <stdio.h>

int main (void)

{
int arr[10]={1,9,6,554,98,321,687,354,229,9854};
int max=arr[0];
int pos_max=0;

for(int i=1;i<10;i++){
if (arr[i]>max){
max = arr[i];
pos_max=i;
}
}
printf("max:%d\n",max);
printf("posmax:%d\n",pos_max);
return 0;
}

