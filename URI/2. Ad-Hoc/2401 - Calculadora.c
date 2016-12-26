// 2401 - Calculadora (https://www.urionlinejudge.com.br/judge/pt/problems/view/2401)

#include "stdio.h"

int main()
{
	int entrada = 0, num = 0;
	double result = 1;
	char oper;

	scanf("%d", &entrada);

	while(entrada--)
	{
		scanf("%d %c", &num, &oper);
		result = (oper == '*') ? result * num : result / num;
	}

	printf("%.0lf\n", result);
	return 0;
}
