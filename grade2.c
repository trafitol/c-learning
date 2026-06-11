#include <stdio.h>

int main (void)

{
int a;

printf("Enter your grade:\n");
scanf("%d",&a);

if (a < 0 || a > 100) {
    printf("Invalid grade.\n");
} else if (a >= 90) {
    printf("A\n");
} else if (a >= 80) {
    printf("B\n");
} else if (a >= 70) {
    printf("C\n");
} else if (a >= 60) {
    printf("D\n");
} else {
    printf("F\n");
}
return 0;
}
