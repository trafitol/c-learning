#include <stdio.h>

int nmbrs [10] = {1,2,3,4,5,6,7,8,9,10};
int total = 0;


int main(void)
{
for(int i=0; i<10; i++){
    total = total + nmbrs[i];
}
float average = (float)total / 10;
    printf("Sum: %d\n", total);
    printf("Average: %.2f\n", average);

return 0;
}


