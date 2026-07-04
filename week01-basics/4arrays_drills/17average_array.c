#include <stdio.h>

int main(void)
{
int values[10] = {12, 4, 9, 21, 3, 17, 8, 25, 11, 6};
float total = 0;

{
for (int i=0;i<10;i++){
total = total + values[i];
}

printf ("average: %.2f\n",total/10);
return 0;
}
}
