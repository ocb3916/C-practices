//���ڿ��� ������ �ٲٱ�
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
	int answer = 0;
	char arr[strlen(s)];
	strcpy(arr, s);
	answer = atoi(arr);
	return answer;
}