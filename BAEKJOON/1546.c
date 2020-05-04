#include <stdio.h>

int main(void)
{
	int sub;
	double max;
	int num[1000] = { 0, };
	double mean = 0;
	scanf("%d", &sub);
	for (int i = 0; i < sub; i++)
	{
		scanf("%d", &num[i]);
	}
	max = num[0];
	for (int i = 0; i < sub; i++)
	{
		if (max < num[i])
			max = num[i];
	}
	for (int i = 0; i < sub; i++)
	{
		mean += num[i] / max * 100;
	}
	printf("%f", mean / sub);
}