/* ���� ������ ����ϴ� ���α׷� */
#include <stdio.h>

int main(void)
{
	double raidus;
	double area;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &raidus);

	area = 3.141592 * raidus * raidus;
	printf("���� ����: %lf", area);

	return 0;
}