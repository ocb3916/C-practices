//자연수 뒤집어 배열로 만들기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
	// 리턴할 값은 메모리를 동적 할당해주세요.
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