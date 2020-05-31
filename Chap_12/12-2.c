#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	printf("공백 문자가 있는 문자열 입력하시오: ");
	gets(str, sizeof(str));
	char* ptr = strtok(str, " ");

	while (ptr != NULL)
	{
		printf("%s", ptr);
		ptr = strtok(NULL, " ");
	}
}