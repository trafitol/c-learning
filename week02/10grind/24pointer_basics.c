#include <stdio.h>

int main (void)

{
	int x = 42;
	int *p = &x;

	printf("Value of x: %d\n",x);
	printf("Address of x: %p\n",(void*)&x);
	printf("Value of p (the address it holds): %p\n",(void*)p);
	printf("Value at the address p points to: %d\n", *p);

	*p = 100;
	printf("\nAfter *p = 100:\n");
	printf ("Value of x: %d\n", x);
	printf("Value at *p:%d\n", *p);
	printf("Address of p itself: %p\n",(void*)&p);

return 0;

}

