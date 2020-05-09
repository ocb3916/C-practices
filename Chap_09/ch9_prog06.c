#include <stdio.h>

int power(int base, int power_raised)
{
	if (base == 1)
		return 1;
	else if (power_raised > 0)
		return base * power(base, power_raised - 1);
	else if (power_raised == 0)
		return 1;
}

int main(void)
{
	int base, power_raised;
	int result;
	printf("¹Ø¼ö: ");
	scanf("%d", &base);
	printf("Áö¼ö: ");
	scanf("%d", &power_raised);
	result = power(base, power_raised);
	printf("%d^%d = %d", base, power_raised, result);
}