#include <stdio.h>

void apply_to_all(int arr[], int size, int (*fn)(int))
{
    for (int i = 0; i < size; i++) {
        arr[i] = fn(arr[i]);
    }
}

int double_it(int n)  { return n * 2; }
int square_it(int n)  { return n * n; }
int negate_it(int n)  { return -n; }

int main(void)
{
    int nums[5] = {1, 2, 3, 4, 5};

    // Array of function pointers — same type: takes int, returns int
    int (*transformations[3])(int) = {&double_it, &square_it, &negate_it};
    const char *names[3] = {"doubled", "squared", "negated"};

    // Loop over transformations, apply each in sequence
    for (int t = 0; t < 3; t++) {
        apply_to_all(nums, 5, *transformations[t]);
        printf("After %s: ", names[t]);
        for (int i = 0; i < 5; i++) printf("%d ", nums[i]);
        printf("\n");
    }

    return 0;
}
