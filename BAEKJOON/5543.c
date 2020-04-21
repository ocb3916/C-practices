#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	int ham_min = 0;
	int bev_min = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	ham_min = (a < b) ? a : b;
	ham_min = (ham_min < c) ? ham_min : c;
	bev_min = (d < e) ? d : e;

	printf("%d", (ham_min + bev_min) - 50);

	return 0;
}