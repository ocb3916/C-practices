<<<<<<< HEAD
#include <stdio.h>
//


extern void printerFunc();
extern int num;

int main() {

	printerFunc();
	printf("%d\n\n", num);

	return 0;
=======
#include <stdio.h>
#include <string.h> //strcpy_s, sprintf_s �Լ��� ����ִ� ���
#include <stdlib.h> // atoi �Լ� ����ִ� ���
#include <time.h> //��¥ ���
#include "RequestDTO.h" //DTO��� ����� ���� ����� ���� ���� �� ""�� �ٿ� include �Ѵ�.
// Struct�� �������� ��� �� ����� �̿�


extern void printerFunc();
extern int num;


int main() {

	time_t t = time(NULL); // time_t t ���� ==> ���� ��¥ ȣ�� �Լ�
	struct tm date; // time�� ����ִ� tm struct
	localtime_s(&date, &t); //���� ��ġ�� �ð�(�ѱ� �ð�)

	char today[8]; //���� ��¥ ���� ���ڹ迭
	char temp[3]; //�ӽ� ��, �� ���� ���ڹ迭

	struct Member mem; //����ü ����

	strcpy_s(mem.name, 10, "������"); //���ڿ� ���� �����
	mem.roomNum = 313; //�� ȣ�� ����

	sprintf_s(today, sizeof(today),"%d", date.tm_year + 1900);	//���� today�� ����(sprintf_s(������ ���ڹ迭, ������ ���ڹ迭 ũ��, ������, ����)
	printf("%s\n", today);
	sprintf_s(temp, sizeof(temp), "%d", date.tm_mon + 1); //�̹��� temp�� ����
	strcat_s(today, sizeof(today) ,temp); //today �迭�� �̾� ���̱�(strcat_s(���ڹ迭, ���ڹ迭 ũ��, �̾���� ���ڹ迭)
	printf("%s\n", today);
	sprintf_s(temp, sizeof(temp), "%02d", date.tm_mday); // �� temp�� ����
	strcat_s(today, sizeof(today), temp); //today �迭�� �̾� ���̱�
	printf("%s\n", today);

	int num1 = atoi(today); //today �迭 ����ȭ

	printf("%d\n", num1);
	printf("%d\n", num1 + 1); // ���� ����

	printerFunc();
	printf("%d\n\n", num);

	return 0;
>>>>>>> b1a8f923f0ad0587f5b52f1d6eb2aa8fe2d1fd1f
}