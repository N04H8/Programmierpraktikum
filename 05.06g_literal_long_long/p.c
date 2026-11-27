#include <stdio.h>

int main()
{
	long long int a = 0x75b2d0a5ll + 0xfc892401ll;

	printf("a: %#llx\n", a);	// soll: 0x1723bf4a6
}