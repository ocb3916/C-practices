//2016��
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* week[] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = 0;

    for (int i = 0; i < a - 1; i++)
    {
        days += month[i];
    }
    days += b - 1;

    char* answer = (char*)malloc(sizeof(week));
    return answer = week[days % 7];

    free(answer);
}