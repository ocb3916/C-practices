#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[100];
	char operator[4];
	char* token;
	int x, y;
	printf("������ �Է��Ͻÿ�: ");
	gets(str, sizeof(str));

	token = strtok(str, " ");
	strcpy(operator,token);
	token = strtok(NULL, " ");
	x = atoi(token);
	token = strtok(NULL, " ");
	y = atoi(token);

	if (strcmp(operator,"add") == 0)
		printf("������ ���: %d\n", x + y);
	else if (strcmp(operator,"sub") == 0)
		printf("������ ���: %d\n", x - y);
	else if (strcmp(operator,"mul") == 0)
		printf("������ ���: %d\n", x * y);
	else if (strcmp(operator,"div") == 0)
		printf("������ ���: %d\n", x / y);
}