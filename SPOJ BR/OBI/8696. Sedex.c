// Problem: 8696. Sedex (http://br.spoj.com/problems/JSEDEX/)

#include <stdio.h>

int main()
{
    int d = 0, a = 0, l = 0, p = 0;
	scanf("%d%d%d%d", &d, &a, &l, &p);
	printf((d <= a && d <= l && d <= p) ? "S" : "N");

    return 0;
}

