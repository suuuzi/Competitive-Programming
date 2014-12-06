// Problem: 1006 - Média 2 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1006)

#include "stdio.h"
int main()
{
    double a = 0, b = 0, c = 0, result = 0; 
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    result = (a * 0.2) + (b * 0.3) + (c * 0.5);
    printf("MEDIA = %.1lf\n", result);
    return 0;
}
