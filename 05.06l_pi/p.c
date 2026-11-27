#include <stdio.h>

int main()
{
	double pi = 0x1921fb54442d18p-51;

	printf("pi: %.15lf\n", pi); // soll: pi: 3.141592653589793
}