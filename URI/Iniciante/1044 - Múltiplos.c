// Problem: 1044 - Múltiplos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1044)

#include "stdio.h"
 
int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
 
    if(a > b)
    {
        if(a % b == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    else
    {
        if(b % a == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
     
    return 0;
}