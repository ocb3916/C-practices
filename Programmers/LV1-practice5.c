//문자열 다루기 기본
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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