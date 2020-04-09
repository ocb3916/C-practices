#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user;
	printf("선택하시오(1:가위 2:바위 3:보)");
	scanf("%d", &user);

	int com;
	srand((int)time(NULL));
	com = rand() % 3 + 1;

	if (user == 1 && com == 3)
			printf("사용자:가위, 컴퓨터:보 --> 사용자가 이겼음");
	else if (user == 1 && com == 2)
			printf("사용자:가위, 컴퓨터:바위 --> 사용자가 졌음");
	else if (user == 1 && com == 1)
			printf("사용자:가위, 컴퓨터:가위 --> 비겼음");
	else if (user == 2 && com == 1)
			printf("사용자:바위, 컴퓨터:가위 --> 사용자가 이겼음");
	else if (user == 2 && com == 2)
			printf("사용자:바위, 컴퓨터:바위 --> 비겼음");
	else if (user == 2 && com == 3)
			printf("사용자:바위, 컴퓨터:보 --> 사용자가 졌음");
	else if (user == 3 && com == 1)
			printf("사용자:보, 컴퓨터:가위 --> 사용자가 졌음");
	else if (user == 3 && com == 2)
			printf("사용자:보, 컴퓨터:바위 --> 사용자가 이겼음");
	else
		printf("사용자:보, 컴퓨터:보 --> 비겼음");

	return 0;
}