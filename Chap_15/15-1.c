#include <stdio.h>
#include <stdbool.h>
#define SIZE 100

int main(void)
{
	FILE* fp1, * fp2;
	bool judge = true;
	char f1[SIZE];
	char f2[SIZE];

	printf("ù ��° ���� �̸�: ");
	gets(f1);
	printf("�� ��° ���� �̸�: ");
	gets(f2);

	if ((fp1 = fopen(f1, "r")) == NULL)
	{
		printf("f1���� ����\n");
		exit(1);
	}
	if ((fp2 = fopen(f2, "r")) == NULL)
	{
		printf("f2���� ����\n");
		exit(1);
	}

	while (1)
	{
		char c1 = fgetc(fp1);
		char c2 = fgetc(fp2);
		if (c1 != c2)
		{
			judge = false;
			break;
		}
		else if (c1 == EOF || c2 == EOF)
			break;
	}

	if (judge == true)
		printf("�� ������ ���� �����ϴ�.");
	else
		printf("�� ������ ���� �ٸ��ϴ�.");

	fclose(fp1);
	fclose(fp2);
}