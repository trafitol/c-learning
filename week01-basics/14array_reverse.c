#include <stdio.h>

int main(void)
{
    int values[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // print forward
    printf("Original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // reverse in place
    for (int i = 0; i < size / 2; i++) {
        int tmp = values[i];
	values[i]=values[size-1-i];
	values[size-1-i]=tmp;

    }

    // print reversed
    printf("Reversed: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}



