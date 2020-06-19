#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int* p;
	int sum = 0;
	printf("정수의 개수: ");
	scanf("%d", &num);
	p = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++)
	{
		printf("양의 정수를 입력하시오: ");
		scanf("%d", &p[i]);
		sum += p[i];
	}

	printf("합은 %d입니다.", sum);

	free(p);
}