//�ڿ��� ������ �迭�� �����
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
	int* answer = (int*)malloc(sizeof(int) * 11);
	int i = 0;

	while (n)
	{
		answer[i] = n % 10;
		n /= 10;
		i++;
	}

	return answer;

	free(answer);
} 