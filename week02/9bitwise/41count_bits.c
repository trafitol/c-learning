#include <stdio.h>

int count_ones(int n)
{
    int count = 0;
    for (int i = 0; i < 32; i++) {   // int is 32 bits
        if ((n >> i) & 1) {
            count++;
        }
    }
    return count;
}

int main(void)
{
    printf("count_ones(0)   = %d\n", count_ones(0));    // 0
    printf("count_ones(1)   = %d\n", count_ones(1));    // 1
    printf("count_ones(5)   = %d\n", count_ones(5));    // 2 (00000101)
    printf("count_ones(22)  = %d\n", count_ones(15));   // 4 (00001111)
    printf("count_ones(255) = %d\n", count_ones(255));  // 8 (11111111)

    return 0;
}
