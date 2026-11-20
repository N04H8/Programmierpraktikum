#include <stdio.h>

int main()
{
	// Deklaration von a, b, c als vorzeichenbehaftete 6-Bit-Ganzzahlen

	_BitInt(6) a, b, c;
	// Berechnung
	a = b = 16;		// 01 0000
	c = a + b;		// 01 0000 + 01 0000 = 10 0000

	// Hier Ergebnis in der Form "c: 123" inkl. Zeilenumbruch ausgeben

	printf("c: %d\n", (int) c);

}