#include <stdio.h>
#include <tgmath.h>

int main()
{
	float complex a;
	a = 1 + 2I;
	printf("%.1f+%.1fi\n", creal(a), cimag(a));
}
