#include <stdio.h>

void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
		C[i] = A[i] + B[i];
	printf("A[] = ");
	for (i = 0; i < size; i++)
		printf("%d ", *A++);
	printf("\nB[] = ");
	for (i = 0; i < size; i++)
		printf("%d ", *B++);
	printf("\nC[] = ");
	for (i = 0; i < size; i++)
		printf("%d ", *C++);
}

int main(void)
{
	int a[10] = { 1,2,3, };
	int b[10] = { 0, };
	int c[10] = { 0, };
	array_add(a, b, c, sizeof(a) / sizeof(int));
}