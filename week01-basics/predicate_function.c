#include <stdio.h>

int is_even(int n)
{
return (0 == n % 2);
}

int main ()

{

for (int i=1; i<=20; i++){
if (is_even(i)) {
	printf("%d is even\n",i);
} else {
	printf("%d is odd\n",i);
}
}
return 0;
}



