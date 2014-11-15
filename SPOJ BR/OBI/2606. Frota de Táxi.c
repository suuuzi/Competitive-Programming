// Problem: 2606. Frota de Táxi (http://br.spoj.com/problems/FROTATAX/)

#include "stdio.h"

int main()
{
	double a = 0, g = 0, ra = 0, rg = 0;
	scanf("%lf %lf %lf %lf", &a, &g, &ra, &rg);
	printf("%s", (ra/a > rg/g) ? "A" : "G");

	return 0;
}
