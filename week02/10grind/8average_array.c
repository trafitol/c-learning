#include <stdio.h>

int main (void)
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int total=0;
for (int i=0;i<10;i++){
total = total + arr[i];
}

printf("average: %.2f\n", (float)total/10);
return 0;

}
