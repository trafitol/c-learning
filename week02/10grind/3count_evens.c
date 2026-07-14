#include <stdio.h>

int main (void)
{
int nmbrs[10] = {84,5,9,11,6,8,4,25,36,44};
int count_evens= 0;

for (int i = 0; i<10;i++){
	if(nmbrs[i]%2==0){
count_evens = count_evens +1;
}
}

printf("Even count = %d\n",count_evens);
return 0;
}
