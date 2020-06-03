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
		{1,"È«±æµ¿1","1",20},
		{2,"È«±æµ¿2","2",25},
		{3,"È«±æµ¿3","3",40},
		{4,"È«±æµ¿4","4",19},
		{5,"È«±æµ¿5","5",34},
		{6,"È«±æµ¿6","6",35},
		{7,"È«±æµ¿7","7",50},
		{8,"È«±æµ¿8","8",23},
		{9,"È«±æµ¿9","9",29},
		{10,"È«±æµ¿10","10",39}
	};

	for (int i = 0; i < 10; i++)
	{
		if (list[i].age >= 20 && list[i].age <= 30)
		{
			printf("ÀÌ¸§=%s", list[i].name);
			printf("\t³ªÀÌ=%d\n", list[i].age);
		}
	}

}