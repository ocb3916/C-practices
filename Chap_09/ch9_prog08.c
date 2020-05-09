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
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	result = get_num_digit(num);
	printf("자리수의 개수: %d", result);
}