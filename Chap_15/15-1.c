#include <stdio.h>
#include <stdbool.h>
#define SIZE 100

int main(void)
{
	FILE* fp1, * fp2;
	bool judge = true;
	char f1[SIZE];
	char f2[SIZE];

	printf("첫 번째 파일 이름: ");
	gets(f1);
	printf("두 번째 파일 이름: ");
	gets(f2);

	if ((fp1 = fopen(f1, "r")) == NULL)
	{
		printf("f1오픈 에러\n");
		exit(1);
	}
	if ((fp2 = fopen(f2, "r")) == NULL)
	{
		printf("f2오픈 에러\n");
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
		printf("두 파일은 서로 같습니다.");
	else
		printf("두 파일은 서로 다릅니다.");

	fclose(fp1);
	fclose(fp2);
}