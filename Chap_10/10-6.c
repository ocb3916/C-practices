#include <stdio.h>

int main(void)
{
	int num[][5] = { {12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21} };
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			sum += num[i][j];
		printf("%d행의 합계: %d\n", i, sum);
		sum = 0;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
			sum += num[j][i];
		printf("%d열의 합계: %d\n", i, sum);
		sum = 0;
	}
}