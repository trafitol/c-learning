#include <stdio.h>

int main (void)
{
int a,b;

printf("Please enter first number:\n");
scanf("%d", &a);

printf("Please enter second number:\n");
scanf("%d", &b);

printf("--- Results ---\n"); 
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);

if (b==0){
printf("Sorry can't divide by 0\n");
}
else {
printf("%d / %d  = %d\n",a,b,a/b);
printf("%d %% %d = %d\n",a,b,a%b);

}
return 0;
}

