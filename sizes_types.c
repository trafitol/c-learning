#include <stdio.h>

int main(void) {
    printf("char:      %zu bytes\n", sizeof(char));
    printf("int:       %zu bytes\n", sizeof(int));
    printf("long:      %zu bytes\n", sizeof(long));
    printf("float:     %zu bytes\n", sizeof(float));
    printf("double:    %zu bytes\n", sizeof(double));
    printf("int*:      %zu bytes\n", sizeof(int*));
    printf("char*:     %zu bytes\n", sizeof(char*));
    return 0;
}
