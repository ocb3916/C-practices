#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user;
	printf("�����Ͻÿ�(1:���� 2:���� 3:��)");
	scanf("%d", &user);

	int com;
	srand((int)time(NULL));
	com = rand() % 3 + 1;

	if (user == 1 && com == 3)
			printf("�����:����, ��ǻ��:�� --> ����ڰ� �̰���");
	else if (user == 1 && com == 2)
			printf("�����:����, ��ǻ��:���� --> ����ڰ� ����");
	else if (user == 1 && com == 1)
			printf("�����:����, ��ǻ��:���� --> �����");
	else if (user == 2 && com == 1)
			printf("�����:����, ��ǻ��:���� --> ����ڰ� �̰���");
	else if (user == 2 && com == 2)
			printf("�����:����, ��ǻ��:���� --> �����");
	else if (user == 2 && com == 3)
			printf("�����:����, ��ǻ��:�� --> ����ڰ� ����");
	else if (user == 3 && com == 1)
			printf("�����:��, ��ǻ��:���� --> ����ڰ� ����");
	else if (user == 3 && com == 2)
			printf("�����:��, ��ǻ��:���� --> ����ڰ� �̰���");
	else
		printf("�����:��, ��ǻ��:�� --> �����");

	return 0;
}