#include <stdio.h>

int main()
{
	int value;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	printf("���� �ڸ�:%d\n", value / 10);
	printf("���� �ڸ�:%d", value % 10);

	return 0;
}