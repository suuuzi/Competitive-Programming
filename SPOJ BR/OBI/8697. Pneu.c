// Problem: 8697. Pneu (http://br.spoj.com/problems/JPNEU/)

#include "stdio.h"
 
int main() 
{
	int desejada = 0, real = 0, total = 0; 
	
	scanf("%d", &desejada);
	scanf("%d", &real);    
	printf("%d", desejada - real);
	 
	return 0;
}


