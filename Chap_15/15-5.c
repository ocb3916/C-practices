#include <stdio.h>
#define SIZE 100

typedef struct student
{
	char name[10];
	int score1, score2, score3;
}SCORE;

int main(void)
{
	SCORE d1;
	FILE* fp1, * fp2;
	char f1[SIZE], f2[SIZE];

	printf("성적이 저장된 파일 이름: ");
	gets(f1);
	printf("성적의 평균을 저장할 파일 이름: ");
	gets(f2);

	if ((fp1 = fopen(f1, "r")) == NULL)
	{
		printf("f1 열기 실패\n");
		exit(1);
	}
	fp2 = fopen(f2, "w");

	while (fscanf(fp1, "%s", d1.name) != EOF)
	{
		fscanf(fp1, "%d %d %d", &d1.score1, &d1.score2, &d1.score3);
		double average = (d1.score1 + d1.score2 + d1.score3) / 3.0;
		fprintf(fp2, "%s\t", d1.name);
		fprintf(fp2, "%05.2f\n", average);
	}
	fclose(fp1);
	fclose(fp2);
}