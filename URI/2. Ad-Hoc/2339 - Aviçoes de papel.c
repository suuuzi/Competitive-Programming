// 2339 - Aviões de papel (https://www.urionlinejudge.com.br/judge/pt/problems/view/2339)

#include "stdio.h"
int main()
{
	int c = 0, p = 0, f = 0, result = 0;
	scanf("%d%d%d", &c, &p, &f);

        result = c * f;
        (result <= p) ? printf("S\n") : printf("N\n");

        return 0;
}
