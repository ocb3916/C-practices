#include <stdio.h>

struct point
{
	int x;
	int y;
};

int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0)
		return 1;
	else if (p.x < 0 && p.y>0)
		return 2;
	else if (p.x < 0 && p.y < 0)
		return 3;
	else
		return 4;
}

int main(void)
{
	struct point p1 = { -1,2 };
	int result = quadrant(p1);
	printf("(%d, %d)�� ��и� = %d", p1.x, p1.y, result);
}