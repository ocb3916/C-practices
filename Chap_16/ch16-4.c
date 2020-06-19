#include <stdio.h>
#define PI 3.141592
#define VOLUME(r,h) PI*(r)*(r)*(h)

int main(void)
{
	double radius, height, volume;
	printf("원기둥의 반지름을 입력하시오: ");
	scanf("%lf", &radius);
	printf("원기둥의 높이를 입력하시오: ");
	scanf("%lf", &height);

	volume = VOLUME(radius, height);
	printf("원기둥의 부피: %f", volume);
}