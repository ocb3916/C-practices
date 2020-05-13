//두 정수 사이의 합
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b)
        answer = a;
    else
        answer = (llabs(a - b) + 1) * (a + b) / 2;
    return answer;
}