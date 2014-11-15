// Problem: 1140 - Flores Florescem da França (https://www.urionlinejudge.com.br/judge/pt/problems/view/1140)

#include "stdio.h"
#include "string.h"
 
int main()
{
    char texto[1000];
    int x = 0;
    char saida = 'Y';
     
    gets(texto);
     
    if(texto[0] == '*')
        return 0;
         
    for(; x<strlen(texto);x++)
    {
        if(texto[x] == ' ')
        {
            if(texto[x+1] != texto[0])
            {
                if((texto[x+1] != (texto[0]+32)) && (texto[x+1] != (texto[0]-32)))
                {
                    saida = 'N';
                    break;
                }
            }
        }      
    }
     
    printf("%c\n", saida);
 
    main();
    return 0;
}