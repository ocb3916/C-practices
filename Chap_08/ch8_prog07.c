#include <stdio.h>

int get_tax(int income)
{
	int tax = 0;
	int tax1 = 0;
	int tax2 = 0;
	if (income > 1000)
	{
		tax1 = 1000 * 0.08;
		tax2 = (income - 1000) * 0.1;
		tax = tax1 + tax2;
	}
	else
		tax = income * 0.08;
}

int main()
{
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����):");
	scanf("%d", &income);
	printf("�ҵ漼�� %d�Դϴ�.", get_tax(income));

	return 0;
}