#include <stdio.h>

int add(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x + y;
}

int sub(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x - y;
}

int mul(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x * y;
}

int div(int x, int y)
{
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	return x / y;
}

int main(void)
{
	char math_symbol;
	int x, y;

	while (1)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &math_symbol, &y);

		if (math_symbol == 'e')
			break;
		switch (math_symbol)
		{
		case'+':
			printf("���� ���: %d\n", add(x, y));
			break;
		case'-':
			printf("���� ���: %d\n", sub(x, y));
			break;
		case'*':
			printf("���� ���: %d\n", mul(x, y));
			break;
		case'/':
			printf("���� ���: %d\n", div(x, y));
			break;
		default:
			printf("�߸��� �Է��Դϴ�.(��Ģ���길 ����մϴ�.)\n");
			break;
		}
	}

}