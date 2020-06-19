#include <stdio.h>

int get_sum(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

int main(void)
{
	int m[3][6] = {
		{10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};

	int row = sizeof(m) / sizeof(m[0]);
	int col = sizeof(m[0]) / sizeof(int);
	int result = 0;

	for (int i = 0; i < row; i++)
	{
		result += get_sum(m[i], col);
	}

	printf("정수의 합=%d", result);
}