// Problem: 3742. Feynman (http://br.spoj.com/problems/FEYNMAN/)

#include "stdio.h"

//S(N) = S(N-1) + N^2

int main()
{
    int quadrado, n, i;

    while (scanf("%d", &n) &&n)
    {
    	
    	if(n == 0)
    		break;
    	
        quadrado = 0;
        
        for (i = 1; i <= n; i++)
			quadrado += i*i;
        
        printf("%d\n", quadrado);
    }
    
    return 0;
}
