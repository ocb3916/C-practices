#include <stdio.h>

void d()
{
	int selfnumber[10001] = { 0, };
	int check = 0;
	for (int i = 1; i <= 10000; i++)
	{
		if (i < 10)
		{
			check = i * 2;
			selfnumber[check] = 1;
		}
		else if (i < 100)
		{
			check = i + (i / 10) + (i % 10);
			selfnumber[check] = 1;
		}
		else if (i < 1000)
		{
			check = i + (i / 100) + ((i % 100) / 10) + ((i % 100) % 10);
			selfnumber[check] = 1;
		}
		else if (i < 10000)
		{
			check = i + (i / 1000) + ((i % 1000) / 100) + (((i % 1000) % 100) / 10) + (((i % 1000) % 100) % 10);
			if (check <= 10000)
				selfnumber[check] = 1;
		}
		
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (selfnumber[i] != 1)
			printf("%d\n", i);
	}
}

int main(void)
{
	d();
}