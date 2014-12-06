// Problem: 1065 - Pares entre Cinco Números (https://www.urionlinejudge.com.br/judge/pt/problems/view/1065)

#include "stdio.h"
 
int main()
{
    int pares = 0;
 
    for(int i = 0; i < 5; i++)
    {
        int num = 0;
        scanf("%d", &num);
         
        if(num % 2 == 0)
            pares++;
    }
 
    printf("%d valores pares\n", pares);
 
    return 0;
}
