#include <stdio.h>

struct point {
    int x;
    int y;
};

int distance_squared(struct point a, struct point b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx * dx + dy * dy;
}

int main(void)
{
    struct point a = {3, 4};
    struct point b = {10, 12};

    printf("Point a: (%d, %d)\n", a.x, a.y);
    printf("Point b: (%d, %d)\n", b.x, b.y);
    printf("Distance squared: %d\n", distance_squared(a, b));

    return 0;
}
