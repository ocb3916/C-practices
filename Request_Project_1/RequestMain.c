#include <stdio.h>
//


extern void printerFunc();
extern int num;

int main() {

	printerFunc();
	printf("%d\n\n", num);

	return 0;
}