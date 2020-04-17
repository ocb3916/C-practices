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
#include <string.h> //strcpy_s, sprintf_s 함수가 들어있는 헤더
#include <stdlib.h> // atoi 함수 들어있는 헤더
#include <time.h> //날짜 헤더
#include "RequestDTO.h" //DTO헤더 사용자 정의 헤더는 직접 제작 후 ""를 붙여 include 한다.
// Struct는 전역으로 사용 시 헤더를 이용


extern void printerFunc();
extern int num;


int main() {

	time_t t = time(NULL); // time_t t 선언 ==> 현재 날짜 호출 함수
	struct tm date; // time에 들어있는 tm struct
	localtime_s(&date, &t); //현재 위치의 시간(한국 시간)

	char today[8]; //오늘 날짜 저장 문자배열
	char temp[3]; //임시 월, 일 저장 문자배열

	struct Member mem; //구조체 선언

	strcpy_s(mem.name, 10, "오찬빈"); //문자열 덮어 씌우기
	mem.roomNum = 313; //방 호실 저장

	sprintf_s(today, sizeof(today),"%d", date.tm_year + 1900);	//올해 today에 저장(sprintf_s(저장할 문자배열, 저장할 문자배열 크기, 포맷팅, 정수)
	printf("%s\n", today);
	sprintf_s(temp, sizeof(temp), "%d", date.tm_mon + 1); //이번달 temp에 저장
	strcat_s(today, sizeof(today) ,temp); //today 배열에 이어 붙이기(strcat_s(문자배열, 문자배열 크기, 이어붙일 문자배열)
	printf("%s\n", today);
	sprintf_s(temp, sizeof(temp), "%02d", date.tm_mday); // 일 temp에 저장
	strcat_s(today, sizeof(today), temp); //today 배열에 이어 붙이기
	printf("%s\n", today);

	int num1 = atoi(today); //today 배열 정수화

	printf("%d\n", num1);
	printf("%d\n", num1 + 1); // 정수 증명

	printerFunc();
	printf("%d\n\n", num);

	return 0;
>>>>>>> b1a8f923f0ad0587f5b52f1d6eb2aa8fe2d1fd1f
}