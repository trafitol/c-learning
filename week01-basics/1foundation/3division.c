#include <stdio.h>

int main(void)

{
int a = 7;
int b = 2;
int result_int = a / b;
float result_float= a / b;
float result_real= (float)a / b;

printf("Integer division 7/2: %d\n", result_int);
printf("Float-assigned, but still int division: %f\n", result_float);
printf("Cast to float first: %f\n", result_real);

printf("Modulo 7 %% 2 = %d\n", a % b);

return 0;
}

