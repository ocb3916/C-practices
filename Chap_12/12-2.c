#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	printf("���� ���ڰ� �ִ� ���ڿ� �Է��Ͻÿ�: ");
	gets(str, sizeof(str));
	char* ptr = strtok(str, " ");

	while (ptr != NULL)
	{
		printf("%s", ptr);
		ptr = strtok(NULL, " ");
	}
}