#include <stdio.h>
#include <string.h>

int main(void)
{
	int c;
	int student[1000] = { 0, };
	double average = 0;
	double ave_stu = 0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		scanf("%d", &student[0]);
		for (int j = 0; j < student[0]; j++)
		{
			scanf("%d", &student[j + 1]);
			average += student[j + 1];
		}
		average = average / student[0];
		for (int w = 0; w < student[0]; w++)
			if (student[w + 1] > average)
				ave_stu++;
		ave_stu /= student[0];
		ave_stu *= 100;
		printf("%.3f%%\n", ave_stu);
		average = 0;
		ave_stu = 0;
	}
}