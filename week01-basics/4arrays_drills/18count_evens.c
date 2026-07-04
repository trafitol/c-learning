#include <stdio.h>

int main (void)
{
int values[10] = {12, 4, 9, 21, 3, 17, 8, 25, 11, 6};
int  even_count = 0;

for (int i=0; i<=10;i++){
if(values[i]%2==0){
even_count = even_count+1;
}
}
printf("even count= %d\n",even_count);
return 0;
}
