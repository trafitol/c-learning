#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Try to allocate 8 MB on the heap
    int *big_array = malloc(sizeof(int) * 2000000);
    if (big_array == NULL) {
        fprintf(stderr, "malloc failed!\n");
        return 1;
    }

    // Write to first and last
    big_array[0] = 42;
    big_array[1999999] = 99;

    printf("First: %d\n", big_array[0]);
    printf("Last:  %d\n", big_array[1999999]);

    free(big_array);
    return 0;
}
