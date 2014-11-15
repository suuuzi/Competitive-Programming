// Problem: 1005 - Média 1 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1005)

#include "stdio.h"
int main()
{
    double a = 0, b = 0, result = 0;    
    scanf("%lf", &a);
    scanf("%lf", &b);
    result = (a * 0.35) + (b * 0.75);
    printf("MEDIA = %.5lf\n", ((result*10) / 11));
    return 0;
}
