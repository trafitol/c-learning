#include <stdio.h>

#define READ    (1 << 0)   // 00000001 — bit 0
#define WRITE   (1 << 1)   // 00000010 — bit 1
#define EXEC    (1 << 2)   // 00000100 — bit 2

void print_bits(int n)
{
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main(void)
{
    int permissions = 0;
    printf("Initial:      "); print_bits(permissions);

    // Grant read and write
    permissions |= READ | WRITE;
    printf("After +R+W:   "); print_bits(permissions);

    // Grant execute
    permissions |= EXEC;
    printf("After +X:     "); print_bits(permissions);

    // Check if write is set
    if (permissions & WRITE) {
        printf("Write is allowed\n");
    }

    // Revoke write
    permissions &= ~WRITE;
    printf("After -W:     "); print_bits(permissions);

    // Check again
    if (permissions & WRITE) {
        printf("Write is allowed\n");
    } else {
        printf("Write is denied\n");
    }

    return 0;
}
