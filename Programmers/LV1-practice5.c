//���ڿ� �ٷ�� �⺻
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
	char arr[8];
	int k;
	strcpy(arr, s);
	k = strlen(s);
	bool answer;
	if (k == 4 || k == 6)
		for (int i = 0; i < k; i++)
		{
			if (isdigit(arr[i]))
				answer = true;
			else
			{
				answer = false;
				break;
			}
		}
	else
		answer = false;
	return answer;
}