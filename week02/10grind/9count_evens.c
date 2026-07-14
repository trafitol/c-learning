#include <stdio.h>

int main (void)
{
int arr[10]={112,68,3,88,4,9,66,15,10,11};
int ce=0;
for (int i=0;i<10;i++){
if (arr[i]%2==0){
ce = ce+1;
}
}

printf("Evens: %d\n",ce);
return 0;
}

