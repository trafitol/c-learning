#include <stdio.h>

int main(void)
{
    int values[10] = {12, 4, 9, 21, 3, 17, 8, 25, 11, 6};
    int sorted = 1;                             // flag: assume sorted

    for (int i = 0; i < 10 - 1; i++) {          // stop at second-to-last
        if (values[i] > values[i + 1]) {        // pair out of order?
            sorted = 0;
            break;                              // no point continuing
        }
    }

    if (sorted) {
        printf("Sorted: yes\n");
    } else {
        printf("Sorted: no\n");
    }

    return 0;
}
