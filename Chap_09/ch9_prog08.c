#include <stdio.h>

int get_num_digit(int num)
{
	if (num > 9)
	{
		return 1 + get_num_digit(num / 10);
	}
	else
		return 1;
}

int main(void)
{
	int num;
	int result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	result = get_num_digit(num);
	printf("�ڸ����� ����: %d", result);
}