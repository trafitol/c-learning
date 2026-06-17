#include <stdio.h>

int main (void)
{
int values[5]={1,2,3,4,5};
int size=5;

for (int i=0;i<size;i++){
printf("Original: %d\n",values[i]);
}


for (int i=0; i<size/2;i++){
int tmp = values[i];
values[i]=values[size-1-i];
values[size-1-i]=tmp;
}

for (int i=0;i<size;i++){
printf("reversed: %d\n",values[i]);
}
return 0;
}


