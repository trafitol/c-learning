#include <stdio.h>

int main (void)

{
int a;

printf("Enter your grade:\n");
scanf("%d",&a);

if (a >= 90 && a <=100){
printf("A\n");
}
 else if(a >= 80 && a <=89){
printf("B\n");
}
 else if(a >= 70 && a <=79){
printf("C\n");
}
 else if(a >= 60 && a <=69){
printf("D\n");
}
 else if(a >= 0 && a <=59){
printf("F\n");
} else {
printf("Invalid number\n");
}
return 0;
}
