#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face()
{
	static int n1, n2, n3, n4, n5, n6;
	static int count;
	int face;
	face = rand() % 6 + 1;
	switch (face)
	{
	case 1:
		n1++;
		break;
	case 2:
		n2++;
		break;
	case 3:
		n3++;
		break;
	case 4:
		n4++;
		break;
	case 5:
		n5++;
		break;
	case 6:
		n6++;
		break;
	default:
		break;
	}
	count++;
	if (count == 100)
	{
		printf("1->%d\n", n1);
		printf("2->%d\n", n2);
		printf("3->%d\n", n3);
		printf("4->%d\n", n4);
		printf("5->%d\n", n5);
		printf("6->%d", n6);
	}
}

int main(void)
{
	srand((unsigned int)time(NULL));
	
	int face = 0;
	for (int i = 0; i < 100; i++)
	{
		get_dice_face();
	}
}