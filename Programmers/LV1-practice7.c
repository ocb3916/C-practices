//이상한 문자 만들기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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