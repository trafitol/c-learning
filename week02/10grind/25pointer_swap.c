#include <stdio.h>

void swap(int *a, int *b){
int tmp = *a;
*a=*b;
*b=tmp;
}

int main (void)
{
int x=10;
int y=20;

printf("original: x=%d and y=%d\n",x,y);

swap(&x,&y);
printf("Reversed: x=%d and y=%d\n",x,y);

return 0;
}
