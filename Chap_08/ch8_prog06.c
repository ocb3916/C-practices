#include <stdio.h>
#include <stdlib.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else if (n % 2 == 1)
		return 0;
}

int absolute(int n)
{
	return abs(n);
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n > 0)
		return 1;
	else
		return 0;
}

int main()
{
	int num;
	int a, b, c;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	a = even(num);
	(a == 1) ? printf("even()�� ���: ¦��\n") : printf("even()�� ���: Ȧ��\n");

	b = absolute(num);
	printf("absolute()�� ���: %d\n", b);

	c = sign(num);
	(c == -1) ? printf("sign()�� ���: ����") :
		(c == 1) ? printf("sign()�� ���: ���") : printf("sign()�� ���: 0");

	return 0;
}