#include <stdio.h>

int main()
{
	int i;
	int t;
	for (i = 2; i <= 100; i++)
	{
		for (t = 2; t <= i; t++)
		{
			if (i % t == 0)
				break;
		}
		if (i == t)
			printf("%d ", i);
	}

	return 0;
}