//���ڿ� ������������ ��ġ�ϱ�
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
	char* answer = (char*)malloc(strlen(s) + 1);
	int i, j, max;
	char temp;
	int k = strlen(s);
	strcpy(answer, s);

	for (i = 0; i < k - 1; i++)
	{
		max = i;
		for (j = i + 1; j < k; j++)
			if (answer[j] > answer[max])
				max = j;

		temp = answer[i];
		answer[i] = answer[max];
		answer[max] = temp;
	}

	return answer;

	free(answer);
}