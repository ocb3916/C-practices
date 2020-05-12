#include <stdio.h>

void han_num(int N);

int main(void)
{
	int N;
	scanf("%d", &N);
	han_num(N);
}

void han_num(int N)
{
	int count = 0;
	int num[45] = { 111,123,135,147,159,210,222,234,246,257,321,333,345,357,
		369,420,432,444,456,468,531,543,555,567,579,630,642,654,666,678,
		741,753,765,777,789,840,852,864,876,888,951,963,975,987,999 };
	if (N < 100)
		printf("%d", N);
	else if (N <= 1000)
	{
		for (int i = 0; i < 45; i++)
		{
			if (N >= num[i])
				count++;
		}
		printf("%d", count + 99);
	}
}