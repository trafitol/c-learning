#include <stdio.h>

int main (void)
{
int a, b;
printf("Enter first number");
scanf("%d", &a);

printf("Enter second number");
scanf("%d", &b);

printf("/n--- Resulatdos ---/n");
printf("%d + %d = %d", a, b, a + b);
printf("%d * %d = %d", a, b, a * b);
printf("%d - %d = %d", a, b, a - b);
printf("%d / %d = %d", a, b, a / b);

return 0;

}
