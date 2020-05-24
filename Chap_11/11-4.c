#include <stdio.h>

void array_print(int* A, int size)
{
	int i;
	printf("A[] = { ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", *A++);
	}
	printf("}\n");
}

int main(void)
{
	int num[] = { 1,2,3,4,0,0,0,0,0,0 };
	array_print(num, sizeof(num) / sizeof(int));
}