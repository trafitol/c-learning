#include <stdio.h>

void print_bits(int n)
{
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main(void)
{
    for (int i = 0; i <= 15; i++) {
        printf("%3d = ", i);
        print_bits(i);
        printf("\n");
    }
    return 0;
}
