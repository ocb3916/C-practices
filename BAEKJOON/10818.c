#include <stdio.h>

int main()
{
	int num[1000000];
	int n;
	int max, min;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}


	max = num[0];
	min = num[0];

	for (int w = 1; w <= n-1; w++)
	{
		if (max < num[w])
			max = num[w];
	}
	for (int j = 1; j <= n-1; j++)
	{
		if (min > num[j])
			min = num[j];
	}
	printf("%d %d", min, max);


	return 0;
}