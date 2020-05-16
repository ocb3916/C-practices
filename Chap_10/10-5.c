#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int num[10] = { 0 };
	int rand_num;
	int max_value = 0;
	int max_num;
	for (int i = 0; i < 100; i++)
	{
		rand_num = rand() % 10;
		num[rand_num]++;
	}
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		if (max_value < num[i])
		{
			max_value = num[i];
			max_num = i;
		}
			
	printf("가장 많이 나온수=%d\n", max_num);
}