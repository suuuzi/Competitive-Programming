// Problem: 1067 - Números Ímpares (https://www.urionlinejudge.com.br/judge/pt/problems/view/1067)

#include "stdio.h"
 
int main()
{
    int entrada = 0;
    scanf("%d", &entrada);
 
    for(int i = 0; i <= entrada; i++)
    {
        if(i % 2 != 0)
            printf("%d\n", i);
    }
     
    return 0;
}
