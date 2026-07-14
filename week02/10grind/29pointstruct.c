#include <stdio.h>

struct point{
	int x;
	int y;
};

int dist_sq(struct point a, struct point b){
	int dx = a.x - a.y;
	int dy = b.x - b.y;
	return dx*dx + dy*dy;
}

int main (void)
{
struct point a = {3,4};
struct point b = {10,12};

printf("Point A: (%d , %d)\n",a.x,a.y);
printf("Point B: (%d , %d)\n",b.x,b.y);
printf("distance squared: %d\n",dist_sq(a,b));

return 0;
}
