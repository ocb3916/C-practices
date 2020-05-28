//문자열 내림차순으로 배치하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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