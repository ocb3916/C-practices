#include <stdio.h>
#define PI 3.141592
#define VOLUME(r,h) PI*(r)*(r)*(h)

int main(void)
{
	double radius, height, volume;
	printf("������� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);
	printf("������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &height);

	volume = VOLUME(radius, height);
	printf("������� ����: %f", volume);
}