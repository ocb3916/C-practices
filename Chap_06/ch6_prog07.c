#include <stdio.h>

int main()
{
	double std, height, weight;
	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%lf %lf", &weight, &height);
	std = (height - 100) * 0.9;

	if (weight < std * 0.9)
		printf("��ü���Դϴ�.");
	else if (weight > std * 1.1)
		printf("��ü���Դϴ�.");
	else
		printf("����ü���Դϴ�.");

	return 0;
}