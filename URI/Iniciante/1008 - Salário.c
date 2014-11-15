// Problem: 1008 - Salário (https://www.urionlinejudge.com.br/judge/pt/problems/view/1008)

#include "stdio.h"
int main()
{
    int numero = 0, horas = 0;
    double valor = 0;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", (horas * valor));

    return 0;
}
