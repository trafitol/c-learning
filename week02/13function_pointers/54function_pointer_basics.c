#include <stdio.h>

int add(int a, int b)		{return a+b;}
int substract (int a, int b)	{return a-b;}
int multiply(int a, int b)	{return a*b;}
int divide(int a, int b)	{return b != 0 ? a/b:0;}

int main (void)
{
	int (*ops[4])(int,int)= {add, substract, multiply, divide};
	const char *names[4] = {"add","sub","mul","div"};

	int x = 20, y = 4;
	for (int i=0;i<4;i++) {
	    printf("%s(%d,%d) = %d\n", names[i], x, y, ops[i](x,y));
	}
	return 0;
}
