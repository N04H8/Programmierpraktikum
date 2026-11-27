#include <stdio.h>
#include <stdint.h>

int main()
{
	float e = 1.602176634e-19;

	printf("sizeof(e): %zu\n", sizeof(e));
	printf("Elementarladung: %.9e C\n", e);
}