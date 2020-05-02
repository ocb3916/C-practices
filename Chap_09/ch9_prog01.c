#include <stdio.h>

int add(int x, int y)
{
	static int count = 0;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	return x + y;
}

int sub(int x, int y)
{
	static int count = 0;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	return x - y;
}

int mul(int x, int y)
{
	static int count = 0;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	return x * y;
}

int div(int x, int y)
{
	static int count = 0;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	return x / y;
}

int main(void)
{
	char math_symbol;
	int x, y;

	while (1)
	{
		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &x, &math_symbol, &y);

		if (math_symbol == 'e')
			break;
		switch (math_symbol)
		{
		case'+':
			printf("연산 결과: %d\n", add(x, y));
			break;
		case'-':
			printf("연산 결과: %d\n", sub(x, y));
			break;
		case'*':
			printf("연산 결과: %d\n", mul(x, y));
			break;
		case'/':
			printf("연산 결과: %d\n", div(x, y));
			break;
		default:
			printf("잘못된 입력입니다.(사칙연산만 허용합니다.)\n");
			break;
		}
	}

}