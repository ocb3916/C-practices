#include <stdio.h>

int main()
{
	int num[9];
	int max;
	int n = 1;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
	}
	max = num[0];
	for (int w = 1; w < 9; w++)
	{
		if (max < num[w])
		{
			max = num[w];
			n = w+1;
		}
	}
	printf("%d\n", max);
	printf("%d", n);

	return 0;
}