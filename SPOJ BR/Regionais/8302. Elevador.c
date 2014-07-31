// Problem: 8302. Elevador (http://br.spoj.com/problems/ELEVADOR/)

#include "stdio.h"
#include "math.h"

int main()
{
	int l = 0, c = 0, r1 = 0, r2 = 0, maior = 0;
	char saida = 'N';
	scanf("%d%d%d%d",&l,&c,&r1,&r2);

	if((l+c+r1+r2) == 0)
		return 0;
		
	maior = (r1 > r2) ? r1+r1 : r2+r2;

	if(maior <= l && maior <= c)
	{
		if(sqrt(pow((l - r2 - r1), 2) + pow((c - r2 - r1), 2)) >=  r1 + r2)
		{
			saida = 'S';
		}
	}
	
	printf("%c\n",saida);	
	
	main();
	return 0;
}
