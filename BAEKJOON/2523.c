#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");			
		}
		printf("\n");
	}
	for (int k = 0; k < x - 1; k++)
	{
		for (int w = 0; w < x - 1 - k; w++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}