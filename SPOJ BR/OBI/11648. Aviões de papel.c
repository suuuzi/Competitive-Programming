// Problem: 11648. Aviões de papel (http://br.spoj.com/problems/PAPEL09/)

#include "stdio.h"
int main()
{
	int c = 0, p = 0, f = 0, result = 0;
	scanf("%d%d%d", &c, &p, &f);
 
        result = c * f;
        (result <= p) ? printf("S") : printf("N");
 
        return 0;
}
