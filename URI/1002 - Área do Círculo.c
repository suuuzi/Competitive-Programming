// Problem: 1002 - Área do Círculo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1002)

#include "stdio.h"
int main()
{
    double  a = 0;
    const double pi = 3.14159;
     
    scanf("%lf", &a);   
    printf("A=%.4f\n", (pi * (a * a)));
    return 0;
}
