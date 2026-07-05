#include <stdio.h>

void recurse(int depth)
{
    int local_data[100];  // uses stack per call
    local_data[0] = depth;
    printf("Depth: %d\n", depth);
    recurse(depth + 1);   // recursive call
}

int main(void)
{
    recurse(0);
    return 0;
}
