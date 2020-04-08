#include <stdio.h>

int main()
{
	double std, height, weight;
	printf("체중과 키를 입력하세요: ");
	scanf("%lf %lf", &weight, &height);
	std = (height - 100) * 0.9;

	if (weight < std * 0.9)
		printf("저체중입니다.");
	else if (weight > std * 1.1)
		printf("과체중입니다.");
	else
		printf("정상체중입니다.");

	return 0;
}