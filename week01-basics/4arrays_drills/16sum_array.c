#include <stdio.h>

int main(void)

{
int values [10] = {12,4,9,21,3,17,8,25,11,6};
int total = 0;

for (int i=0; i<10;i++){
total = total+values[i];
}
printf("total: %d\n",total);
return 0;
}
