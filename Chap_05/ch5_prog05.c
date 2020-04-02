#include <stdio.h>

int main()
{
	int value;
	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	printf("십의 자리:%d\n", value / 10);
	printf("일의 자리:%d", value % 10);

	return 0;
}