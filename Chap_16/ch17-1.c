#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int* p;
	int sum = 0;
	printf("������ ����: ");
	scanf("%d", &num);
	p = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++)
	{
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &p[i]);
		sum += p[i];
	}

	printf("���� %d�Դϴ�.", sum);

	free(p);
}