#include <stdio.h>

int main (void)
{
int nmbrs[7] = {3,-7,-1,-9,-4,-8,-2};
int a =nmbrs[0];

for (int i = 0; i<7;i++){
if (nmbrs[i] > a){
a = nmbrs[i];
}
}
printf("max: %d\n",a);
return 0;
}


