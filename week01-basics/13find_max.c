#include <stdio.h>

int main (void)
{
int values[7] = {3,7,1,9,4,8,2};
int max=0;

for(int i=1; i<7; i=i+1){
if (values[i]>max){
max = values[i];
}
}
printf("max = %d\n", max);

return 0;
}

