#include <stdio.h>
#include <string.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
	char str[100];
	printf("문자열을 입력하시오: ");
	gets(str, sizeof(str));

	for (int j = 0; j < strlen(str); j++)
	{
		if (str[j] == 'a')
			a++;
		else if (str[j] == 'b')
			b++;
		else if (str[j] == 'c')
			c++;
		else if (str[j] == 'd')
			d++;
		else if (str[j] == 'e')
			e++;
		else if (str[j] == 'f')
			f++;
		else if (str[j] == 'g')
			g++;
		else if (str[j] == 'h')
			h++;
		else if (str[j] == 'i')
			i++;
	}
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	printf("d: %d\n", d);
	printf("e: %d\n", e);
	printf("f: %d\n", f);
	printf("g: %d\n", g);
	printf("h: %d\n", h);
	printf("i: %d\n", i);
}