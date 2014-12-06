// Problem: 1059 - Números Pares (https://www.urionlinejudge.com.br/judge/pt/problems/view/1059)

#include "stdio.h"
 
int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
            printf("%d\n", i);
    }
     
    return 0;
}
