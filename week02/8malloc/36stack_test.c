#include <stdio.h>

int main(void)
{
    // Try to allocate 8 MB on the stack
    // 2 million ints × 4 bytes = 8 MB
    int big_array[20000000];

    // Just write to the first and last to force use
    big_array[0] = 42;
    big_array[1999999] = 99;

    printf("First: %d\n", big_array[0]);
    printf("Last:  %d\n", big_array[1999999]);

    return 0;
}
