#include <stdio.h>

int main (void)
{
int values[10] = {5,25,88,33,21,4,16,8,9,93};
int min = values[0];

for (int i=0;i<10;i++){
	if (values[i]<min){
	min = values[i];
    	}
    }

printf("min = %d\n",min);

return 0;
}
