#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (int x = 1; x <= n; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}
		

	return 0;
}