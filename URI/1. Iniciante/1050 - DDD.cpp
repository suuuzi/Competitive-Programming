// Problem: 1050 - DDD (https://www.urionlinejudge.com.br/judge/pt/problems/view/1050)

#include "stdio.h"
 
int main()
{
    int entrada = 0;
    scanf("%d", &entrada);
 
    switch(entrada)
    {
        case 61:
            printf("Brasilia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("Sao Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;  
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
 
    return 0;
}
