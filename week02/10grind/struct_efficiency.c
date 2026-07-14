#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

// A large struct — bigger than fits comfortably on the stack in bulk
struct big_record {
    char name[100];
    char email[100];
    char address[200];
    int age;
    float salary;
    double balance;
    int padding[100];   // extra bytes to make the struct large
};

// Version 1: pass by VALUE — copies the whole struct every call
float total_by_value(struct big_record records[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        // Simulating processing: call a function that takes struct by value
        // Every call copies the whole struct (~1000+ bytes)
        struct big_record local = records[i];   // explicit copy
        total += local.salary;
    }
    return total;
}

// Version 2: pass by POINTER — 8 bytes per access
float total_by_pointer(const struct big_record *records, int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        // Access through pointer, no copy
        total += records[i].salary;
    }
    return total;
}

int main(void) {
    const int N = 1000000;   // one million records

    // Print the struct size — shows why copying matters
    printf("sizeof(struct big_record) = %zu bytes\n", sizeof(struct big_record));
    printf("Total array size = %.2f MB\n", 
           (sizeof(struct big_record) * N) / (1024.0 * 1024.0));
    printf("\n");

    // Allocate on the heap because 1M records on stack would overflow
    struct big_record *records = malloc(sizeof(struct big_record) * N);
    if (records == NULL) {
        fprintf(stderr, "malloc failed\n");
        return 1;
    }

    // Fill with dummy data
    for (int i = 0; i < N; i++) {
        records[i].salary = 50000.0f + i;
    }

    // Time version 1: by value
    clock_t start = clock();
    float total1 = total_by_value(records, N);
    clock_t end = clock();
    double time1 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("By value:    total = %.2f, time = %.4f seconds\n", total1, time1);

    // Time version 2: by pointer
    start = clock();
    float total2 = total_by_pointer(records, N);
    end = clock();
    double time2 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("By pointer:  total = %.2f, time = %.4f seconds\n", total2, time2);

    printf("\nSpeedup: %.1fx\n", time1 / time2);

    free(records);
    return 0;
}
