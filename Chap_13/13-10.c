#include <stdio.h>

typedef struct employee
{
	int num;
	char name[10];
	char phone[20];
	int age;
}meminfo;

int main(void)
{
	meminfo list[10] = {
		{1,"ȫ�浿1","1",20},
		{2,"ȫ�浿2","2",25},
		{3,"ȫ�浿3","3",40},
		{4,"ȫ�浿4","4",19},
		{5,"ȫ�浿5","5",34},
		{6,"ȫ�浿6","6",35},
		{7,"ȫ�浿7","7",50},
		{8,"ȫ�浿8","8",23},
		{9,"ȫ�浿9","9",29},
		{10,"ȫ�浿10","10",39}
	};

	for (int i = 0; i < 10; i++)
	{
		if (list[i].age >= 20 && list[i].age <= 30)
		{
			printf("�̸�=%s", list[i].name);
			printf("\t����=%d\n", list[i].age);
		}
	}

}