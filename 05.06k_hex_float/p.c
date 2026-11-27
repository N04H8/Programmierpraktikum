#include <stdio.h>

int main()
{
	float a = 0xABC.Dp0;
	float b = 0xABC.Dp4;

	printf("a: %.5f\n", a);
	printf("b: %.5f\n", b);
}
