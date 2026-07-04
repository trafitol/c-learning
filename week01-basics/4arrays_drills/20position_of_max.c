#include <stdio.h>

int main (void)
{
int values[10] = {12, 4, 9, 21, 3, 17, 8, 25, 11, 6};
int max_index = 0;
int max = values[0];

for (int i=1;i<10;i++){
if (values[i]>max){
max = values[i];
max_index = i;
}}
printf("max value is %d\n",max);
printf("max index  is %d\n",max_index);

return 0;
}

