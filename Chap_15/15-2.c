#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int main(void)
{
	FILE* fp1, * fp2;
	char f1[SIZE], f2[SIZE];

	printf("첫 번쨰 파일 이름: ");
	gets(f1);
	printf("두 번째 파일 이름: ");
	gets(f2);

	if ((fp1 = fopen(f1, "r")) == NULL)
	{
		printf("f1 오픈 에러\n");
		exit(1);
	}
	fp2 = fopen(f2, "w");

	while (1)
	{
		char c1 = fgetc(fp1);
		char c2 = toupper(c1);
		fprintf(fp2, "%c", c2);
		printf("%c", c2);
		if (c1 == EOF)
			break;
	}

	fclose(fp1);
	fclose(fp2);
}