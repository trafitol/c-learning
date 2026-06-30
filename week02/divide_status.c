#include <stdio.h>

int divide(int a, int b, int *result)

{
if (b==0){
 return -1; //failure
}
 *result = a / b;
 return 0; //success
}

int main (void)
{
int x=10;
int y=5;
int res;


//x → goes into parameter a. Pass-by-value, just the number.
//y → goes into parameter b. Pass-by-value, just the number.
//&res → goes into parameter result. We're passing the address of res so the function can write there.

//int a → function expects an int. Caller passes a plain value: x
//int *result → function expects a pointer (an address). Caller passes an address: &res

if (divide(x, y, &res)==0){
printf("Result: %d\n",res);
}
else{
printf("Error: cannot divide by zero \n");
}
return 0;

}
