#include <stdio.h>

int get_digit_sum(int n)
{
	if (n > 0)
		return (n % 10) + get_digit_sum(n / 10);
	else
		return 0;
}

int main(void)
{
	int num;
	int result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	result = get_digit_sum(num);
	printf("�ڸ����� ��: %d", result);
}