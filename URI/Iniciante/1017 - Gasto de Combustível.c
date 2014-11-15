// Problem: 1017 - Gasto de Combustível (https://www.urionlinejudge.com.br/judge/pt/problems/view/1017)

#include "stdio.h"
#include "math.h"
int main()
{
    int tempo = 0, velocidade = 0;
    double combus = 0;
 
    scanf("%d%d", &tempo, &velocidade);
    combus = ((double)(tempo * velocidade) / 12);
    printf("%.3lf\n", combus);
 
    return 0;
}