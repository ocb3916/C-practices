//�̻��� ���� �����
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
	char* answer = (char*)malloc(strlen(s));
	strcpy(answer, s);
	int k = strlen(s);
	int count = 0;

	for (int i = 0; i < k; i++)
	{
		if (answer[i] == ' ')
			count = 0;
		else
		{
			if (count % 2 == 0)
			{
				if (answer[i] >= 'A' && answer[i] <= 'Z')
					count++;
				else
				{
					answer[i] -= 32;
					count++;
				}
			}
			else
			{
				if (answer[i] >= 'a' && answer[i] <= 'z')
					count++;
				else
				{
					answer[i] += 32;
					count++;
				}
			}
		}
	}
	return answer;
}