#include <stdio.h>

int main(void)
{
int a=7;
int b=2;
int div=a/b;
float fl=a/b;
float flc=(float)a/b;

printf("integer division 7/2: %d\n",div);
printf("float-assigned, but still int division: %f\n",fl);
printf("cast to float first: %.6f\n",flc);
printf("7 %% 2 = %d\n",a%b);
return 0;
}


