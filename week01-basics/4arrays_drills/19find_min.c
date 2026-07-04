#include <stdio.h>

int main (void)
{
int values[10] = {12, 4, 9, 21, 3, 17, 8, 25, 11, 6};
int min = values[0];

for(int i=0;i<10;i++){
if (values[i]<min){
min = values[i];
}
}
printf("min: %d\n",min);
return 0;
}
