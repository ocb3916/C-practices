#include <stdio.h>

int main(void)
{
	double width, length, height;
	double volume;
	
	printf("상자의 가로 세로 높이를 한 번에 입력: ");
	scanf("%lf %lf %lf", &width, &length, &height);
	volume = width * length * height;
	printf("상자의 부피는 %lf입니다.", volume);

	return 0;
}