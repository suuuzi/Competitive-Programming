// 2189 - Quermesse (https://www.urionlinejudge.com.br/judge/pt/problems/view/2189)

#include <stdio.h>

int main()
{
        int n, i, num, cont = 1;

        while(scanf("%d",&n) &&n)
        {
                for(i = 1; i <= n; i++)
                {
                        scanf("%d", &num);
                        if(i == num)
                                printf("Teste %d\n%d\n\n", cont++, num);
                }
        }
        return 0;
}
