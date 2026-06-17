#include <stdio.h>

int main (void)

{
int a, b;
printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: " );
scanf("%d", &b);

printf("\n--- Results ---\n");
printf("%d + %d = %d\n", a, b, a + b);
printf("%d - %d = %d\n", a, b, a - b);
printf("%d * %d = %d\n", a, b, a * b);

if(b != 0) {
printf("%d / %d = %d\n", a, b, a / b);
printf("%d %% %d = %d\n", a, b, a % b);
} else {
printf("CAnnot divide by zero!\n");
}

return 0;

}
