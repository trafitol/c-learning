#include <stdio.h>

int double_it(int n)
{
    return n * 2;
}

int main(void)
{
    int a = 5;
    int b = double_it(a);

    printf("a = %d, doubled = %d\n", a, b);
    printf("Direct: %d\n", double_it(10));
    return 0;
}
