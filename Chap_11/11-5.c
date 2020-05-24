#include <stdio.h>

void convert(double* grades, double* scores, int size)
{
	int i;
	for (i = 0; i < size; i++)
		scores[i] = 100 / 4.3 * grades[i];
	for (i = 0; i < size; i++)
		printf("%05.2f\t", *grades++);
	printf("\n");
	for (i = 0; i < size; i++)
		printf("%05.2f\t", *scores++);
}

int main(void)
{
	double num[] = { 0,0.5,1,1.5,2,2.5,3,3.5,4,4.3 };
	double zero[sizeof(num) / sizeof(double)] = { 0, };
	convert(num, zero, sizeof(num) / sizeof(double));
}