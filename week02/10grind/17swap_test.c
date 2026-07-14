#include <stdio.h>

int main (void)

{

int a=10;
int b=20;

printf("before: a = %d and b = %d\n",a,b);

int tmp = a;
a = b;
b = tmp;

printf("after: a=%d and b = %d\n",a,b);

return 0;

} 
