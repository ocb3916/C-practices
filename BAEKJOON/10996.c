#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);

	for (int i = 0; i < x; i++)
	{
		if (x == 1)
			{
				printf("*");
				break;
			}
		for (int k = 0; k < x; k++)
			{
			if (k % 2 == 0)
				printf("*");
			else
				printf(" ");
			}
			printf("\n");
		for (int w = 0; w < x; w++)
			{
			if (w % 2 == 0)
				printf(" ");
			else
				printf("*");
			}
		if (i != x - 1)
			printf("\n");
	}

	return 0;
}