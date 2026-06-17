#include <stdio.h>

int main(void)
{
int a = 10;
int b = 20;
int tmp;

printf("Before: a = %d, b = %d\n", a,b);

tmp = a;
a = b;
b = tmp;

printf ("After: a = %d, b= %d\n",a,b);
return 0;
}
