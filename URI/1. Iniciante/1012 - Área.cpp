//Problem: 1012 - Área (https://www.urionlinejudge.com.br/judge/pt/problems/view/1012)

#include <iostream>
#include "stdio.h"
int main()
{
    double a = 0, b = 0, c = 0, res = 0;
    std::cin >> a >> b >> c;
    const double pi = 3.14159;
     
    printf("TRIANGULO: %.3lf\n", (double)((a * c) / 2));
    printf("CIRCULO: %.3lf\n", (double)(pi * (c * c)));
    printf("TRAPEZIO: %.3lf\n", (double)(((a + b) / 2) * c));
    printf("QUADRADO: %.3lf\n", (double)(b * b));
    printf("RETANGULO: %.3lf\n", (double)(a * b));
 
    return 0;
}
