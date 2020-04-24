#include <stdio.h>

int main()
{
	int x;
	int count = 0;
	scanf("%d", &x);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (2 * x - 1)-(2*i); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int g = x - 1; g > 0; g--)
	{
		for (int u = 0; u < g - 1; u++)
		{
			printf(" ");
		}
		for (int w = 0; w < 3+(count*2); w++)
		{
			printf("*");
		}
		printf("\n");
		count++;
	}

	return 0;
}