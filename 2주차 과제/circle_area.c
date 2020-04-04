/* 원의 면적을 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
	double raidus;
	double area;

	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &raidus);

	area = 3.141592 * raidus * raidus;
	printf("원의 면적: %lf", area);

	return 0;
}