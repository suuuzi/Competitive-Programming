// 2369 - Conta de água (https://www.urionlinejudge.com.br/judge/pt/problems/view/2369)

#include <stdio.h>

int main()
{
  int c = 0, p = 0;
	scanf("%d", &c);

	if(c <= 10)
		p = 7;
	else if(c >= 11 && c <= 30)
		p = (c-10)*1 + 7;
	else if(c >= 31 && c <= 100)
		p = (c - 30)*2 + 27;
	else if(c >= 101)
		p = (c - 100)*5 + 167;

	printf("%d\n", p);

  return 0;
}
