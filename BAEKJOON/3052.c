#include <stdio.h>

int main(void)
{
	int num[10];
	int rest[42] = { 0, };
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (rest[num[i] % 42] < 1)
			rest[num[i] % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		result += rest[i];
	}
	printf("%d", result);

}