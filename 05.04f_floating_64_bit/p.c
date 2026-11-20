#include <stdio.h>

int main()
{
	double a = 12.5;

	printf("Größe in Bit: %zu\n", sizeof(a) * 8 );
	printf("Wert von a: %.2lf\n", a);
}