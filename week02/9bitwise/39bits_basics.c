#include <stdio.h>

void print_bits(int n)
{
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main(void)
{
    int a = 12;   // 00001100
    int b = 10;   // 00001010

    printf("a       = "); print_bits(a);
    printf("b       = "); print_bits(b);
    printf("a & b   = "); print_bits(a & b);
    printf("a | b   = "); print_bits(a | b);
    printf("a ^ b   = "); print_bits(a ^ b);
    printf("~a      = "); print_bits(~a);
    printf("a << 2  = "); print_bits(a << 2);
    printf("a >> 1  = "); print_bits(a >> 1);

    return 0;
}
