#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("How many squares? ");
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL) {
        fprintf(stderr, "Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    printf("Squares: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}
