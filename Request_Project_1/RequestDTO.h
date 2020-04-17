//C언어 헤더 작성

#pragma once 
#ifndef STRUCT2_H //구조체의 중복선언 방지 STRUCT2_H가 먼저 선언이 되어있는지 확인한다.
#define STRUCT2_H //STRUCT2_H가 선언 되어있지 않을시 선언한다.
//구조체를 등록 하시오.

struct Member
{
	char name[10];
	int roomNum;
	int date;

};

#endif