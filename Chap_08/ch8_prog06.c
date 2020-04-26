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
	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	a = even(num);
	(a == 1) ? printf("even()의 결과: 짝수\n") : printf("even()의 결과: 홀수\n");

	b = absolute(num);
	printf("absolute()의 결과: %d\n", b);

	c = sign(num);
	(c == -1) ? printf("sign()의 결과: 음수") :
		(c == 1) ? printf("sign()의 결과: 양수") : printf("sign()의 결과: 0");

	return 0;
}