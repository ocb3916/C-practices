#include <stdio.h>

long long sum(int a[], int n)
{
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	return sum;
}

int main(void)
{
	int array[1000000] = { 0, };
	int num;
	long long result;
	scanf("%d", &num);
	result = sum(array, num);
	printf("%lld", result);
}