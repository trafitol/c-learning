#include <stdio.h>

//The struct version can't be looped as easily (each field has a specific name). The array version can be looped naturally.
//Use struct when the stages are logically distinct roles ("here's the doubler role, here's the squarer role"). 
//Use array when they're interchangeable transformations in a sequence.
//Real kernel code uses both, depending on the situation.

void apply_to_all(int arr[], int size, int (*fn)(int))
{
    for (int i = 0; i < size; i++) {
        arr[i] = fn(arr[i]);
    }
}

int double_it(int n)  { return n * 2; }
int square_it(int n)  { return n * n; }
int negate_it(int n)  { return -n; }

// Struct with named function pointer fields
struct pipeline {
    int (*doubler)(int);
    int (*squarer)(int);
    int (*negator)(int);
};

int main(void)
{
    int nums[5] = {1, 2, 3, 4, 5};
    
    // Initialize the struct with named fields
    struct pipeline pipe = {
        .doubler = double_it,
        .squarer = square_it,
        .negator = negate_it
    };
    
    // Apply each named stage
    apply_to_all(nums, 5, pipe.doubler);
    printf("After doubled: ");
    for (int i = 0; i < 5; i++) printf("%d ", nums[i]);
    printf("\n");
    
    apply_to_all(nums, 5, pipe.squarer);
    printf("After squared: ");
    for (int i = 0; i < 5; i++) printf("%d ", nums[i]);
    printf("\n");
    
    apply_to_all(nums, 5, pipe.negator);
    printf("After negated: ");
    for (int i = 0; i < 5; i++) printf("%d ", nums[i]);
    printf("\n");
    
    return 0;
}
