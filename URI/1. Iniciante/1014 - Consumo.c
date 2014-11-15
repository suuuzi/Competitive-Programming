// Problem: 1014 - Consumo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1014)

#include "stdio.h"
int main()
{
    int a = 0;
    double b = 0;
    scanf("%d%lf", &a, &b);
 
    printf("%.3lf km/l\n", (double)(a / b));
 
    return 0;
}
