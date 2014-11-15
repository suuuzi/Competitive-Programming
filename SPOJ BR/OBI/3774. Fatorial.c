// Problem: 3774. Fatorial (http://br.spoj.com/problems/FATORIA2/)

#include "stdio.h"

int fat(int n)
{
    if(n == 0) 
    	return 1;
    else 
    	return n * fat(n-1);
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    
    if(num > 12) 
    	return 0;
    else 
    	printf("%d", fat(num));
    
    return 0;
}

