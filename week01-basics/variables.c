#include <stdio.h>

int main(void)
{
int age = 30;
char initial = 'M';
float height = 1.85f;
double pi = 3.141592653589793;
printf("Age: %d\n", age);
printf("Initial: %c\n", initial);
printf("Height: %f meters\n", height);
printf("Pi: %f\n", pi);
printf("Pi (more precision): %.15f\n", pi);

return 0;

}
