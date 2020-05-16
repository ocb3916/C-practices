#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int num[10];
	int max, min;
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		num[i] = rand();
	max = num[0];
	min = num[0];
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
	{
		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);
}