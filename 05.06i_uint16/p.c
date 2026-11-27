#include <stdio.h>
#include <stdint.h>

int main()
{

	uint16_t a = 0x8765;

	a = a + a;

	printf("sizeof(a): %zu\n", sizeof(a));
	printf("Ergebnis: %d\n", a);
}