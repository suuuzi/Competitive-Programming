// Problem: 8777. Cometa (http://br.spoj.com/problems/COMETA2/)

#include "stdio.h"

int calcProxPassagem(int ano)
{
	int i = 1986;

	while(ano > i)
		i += 76;

	return i;
}

int main()
{
	int ano = 0, proxPassagem = 1986;
	scanf("%d", &ano);
	
	if(ano > 1986)
	{
		proxPassagem = calcProxPassagem(ano);
	
		if(ano == proxPassagem)
			proxPassagem = calcProxPassagem(ano+1);
	}
	
	printf("%d", proxPassagem);
	return 0;
	
} 

