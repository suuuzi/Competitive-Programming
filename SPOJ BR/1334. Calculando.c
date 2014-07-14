// Problem: 1334. Calculando (CALCULA)

#include "stdio.h"
int contador = 1;

int main()
{
	int entrada = 0, result = 0, i = 1;
	scanf("%d", &entrada);
	
	if(entrada == 0)
		return 0;

	for(; i < (entrada*2)-1; )
	{
		int num1 = 0, num2 = 0;
		char oper;

		if(i == 1)
		{
			scanf("%d", &num1);
			scanf("%c", &oper);
			scanf("%d", &num2);
			result = (oper == '+') ? num1 + num2 : num1 - num2;
			i += 3;
		}
		else
		{
			scanf("%c", &oper);
			scanf("%d", &num2);
			result = (oper == '+') ? result + num2 : result - num2;
			i += 2;
		}
		
	}
	printf("Teste %d\n%d\n", contador, result);
	contador ++;

	main();
	return 0;
}
