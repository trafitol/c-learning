#include <stdio.h>

int divide(int a, int b, int *result){
if (b==0){
return -1; //failure
}
else {
*result = a/b;
return 0;
}
}


int main (void)
{
int res;
int x=10;
int y=5;

if(divide(x,y,&res)==0){
printf("result: %d\n",res);
}
else{
printf("Can't divide by 0\n");
}
return 0;

}


