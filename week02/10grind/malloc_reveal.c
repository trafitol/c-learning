#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long size = 1;
    while (1) {
        void *p = malloc(size);
        if (p == NULL) {
            printf("Failed at %ld bytes (~%ld MB)\n", size, size / 1024 / 1024);
            break;
        }
        free(p);
        size *= 2;
    }
    return 0;
}
