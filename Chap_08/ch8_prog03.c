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
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);
	printf("���� ������ %lf�Դϴ�.", cal_area(r));

	return 0;
}