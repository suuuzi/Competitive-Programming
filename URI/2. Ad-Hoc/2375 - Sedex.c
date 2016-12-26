// 2375 - Sedex (https://www.urionlinejudge.com.br/judge/pt/problems/view/2375)
#include <stdio.h>

int main()
{
    int d = 0, a = 0, l = 0, p = 0;
	scanf("%d%d%d%d", &d, &a, &l, &p);
	printf((d <= a && d <= l && d <= p) ? "S\n" : "N\n");

    return 0;
}
