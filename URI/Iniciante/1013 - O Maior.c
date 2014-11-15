// Problem: 1013 - O Maior (https://www.urionlinejudge.com.br/judge/pt/problems/view/1013)

#include "stdio.h"
int main()
{
    int a = 0, b = 0, c = 0, fim = 0;
    scanf("%d%d%d", &a, &b, &c);
 
    if(a > b && a > c)
        fim = a;
    else if(b > a && b > c)
        fim = b;
    else if(c > a && c > b)
        fim = c;
 
    printf("%d eh o maior\n", fim);
 
    return 0;
}
