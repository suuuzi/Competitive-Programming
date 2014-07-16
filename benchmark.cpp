#include <stdio.h>     
#include <time.h>     
#include <math.h>      
 
int qualquerFuncao(int n) 
{
	int i,j;
	int freq = n - 1;
	
	for (i=2; i<=n; ++i) 
		for (j=sqrt(i);j>1;--j) 
			if (i%j==0) 
			{
				--freq; 
				break;
			}
			
	return freq;
}
 
int main ()
{
	clock_t t;
	int f;
	t = clock();
 
	// código para teste abaixo
	f = qualquerFuncao (99999);
	// 
 
	t = clock() - t;
	printf ("Programa levou %f segundos.\n",((float)t)/CLOCKS_PER_SEC);
	return 0;
}
