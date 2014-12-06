// Problem: 1116 - Dividindo X por Y (https://www.urionlinejudge.com.br/judge/pt/problems/view/1116)

#include "stdio.h"
#include "math.h"
 
int main()
{
    int entrada = 0;
    scanf("%d", &entrada);
 
    for(int i = 0; i < entrada; i++)
    {
        int x = 0, y =0;
        scanf("%d %d", &x, &y);
        double resultado = 0;
 
        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {   
            resultado = (double)(x) / (double)(y);
            printf("%.1lf\n", resultado);
        }
    }
 
    return 0;
}
