//�ڵ��� ��ȣ ������
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
	char* answer = (char*)malloc(strlen(phone_number) + 1);
	int num = strlen(phone_number);
	strcpy(answer, phone_number);

	for (int i = 0; i < num - 4; i++)
		answer[i] = '*';

	return answer;

	free(answer);
}