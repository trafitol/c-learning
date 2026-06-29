#include <stdio.h>

int main (void)
{
int values[10] = {12,4,9,21,3,17,8,25,11,6};
int counte=0;

for(int i=0;i<10;i++){
if (values[i]%2==0){
counte = counte+1;
}
}
printf ("Even count: %d\n",counte);
return 0;
}
