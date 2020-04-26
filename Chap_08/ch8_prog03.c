#include <stdio.h>
#define PI 3.141592

double cal_area(double r)
{
	double area = PI * r * r;
	return area;
}

int main()
{
	double r;
	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &r);
	printf("원의 면적은 %lf입니다.", cal_area(r));

	return 0;
}