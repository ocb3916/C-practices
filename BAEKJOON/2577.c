#include <stdio.h>

int main()
{
	int a, b, c;
	int result = 0;
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;
	int num[10] = {0};

	while (result != 0)
	{
		num[result % 10] += 1;
		result /= 10;
	}
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
	{
		printf("%d\n", num[i]);
	}


	return 0;
}