// Problem: 3830. Soma (http://br.spoj.com/problems/SOMA/)

#include <stdio.h> 
 
int main()
{ 
        int num, x, i, soma; 
 
        scanf("%i", &num);
        soma = 0; 
 
        if(num < 51 && num >= 0)
        {
                for(i = 0; i < num; i++)
                { 
                        scanf("%i", &x);
                        if(x < 5001) 
                                soma += x;              
                }        
                printf("%i", soma);
        }

        return 0;               
}
