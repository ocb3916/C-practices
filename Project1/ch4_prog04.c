#include <stdio.h>

int main(void)
{
	double width, length, height;
	double volume;
	
	printf("������ ���� ���� ���̸� �� ���� �Է�: ");
	scanf("%lf %lf %lf", &width, &length, &height);
	volume = width * length * height;
	printf("������ ���Ǵ� %lf�Դϴ�.", volume);

	return 0;
}