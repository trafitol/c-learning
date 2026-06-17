#include <stdio.h>
int add(int n1, int n2)
{
return n1+n2;
}
int subtract(int n1, int n2)
{
return n1-n2;
}
int multiply(int n1, int n2)
{
return n1*n2;
}
int divide(int n1, int n2)
{
return n1/n2;
}
int mod(int n1, int n2)
{
return n1 % n2;
}
int main (void)
{
int a, b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: " );
scanf("%d", &b);
printf("\n--- Results ---\n");
printf("%d + %d = %d\n", a, b, add(a,b));
printf("%d - %d = %d\n", a, b, subtract(a,b));
printf("%d * %d = %d\n", a, b, multiply(a,b));
if(b != 0) {
printf("%d / %d = %d\n", a, b,divide(a,b));
printf("%d %% %d = %d\n", a, b,mod(a,b));
} else {
printf("Cannot divide by zero!\n");
}
return 0;
}
