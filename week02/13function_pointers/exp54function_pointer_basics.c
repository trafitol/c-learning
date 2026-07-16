#include <stdio.h>

int add(int a, int b)      { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b)   { return b != 0 ? a / b : 0; }

int main(void)
{
    // Declare an array of 4 pointers to functions
    int (*ops[4])(int, int);

    // Explicitly assign the ADDRESS of each function
    ops[0] = &add;
    ops[1] = &subtract;
    ops[2] = &multiply;
    ops[3] = &divide;

    const char *names[4] = {"add", "sub", "mul", "div"};

    int x = 20, y = 4;
    for (int i = 0; i < 4; i++) {
        // Explicitly dereference the function pointer before calling
        int result = (*ops[i])(x, y);
        printf("%s(%d, %d) = %d\n", names[i], x, y, result);
    }
    return 0;
}
