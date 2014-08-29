// Problem: 11645. Notas da prova (http://br.spoj.com/problems/NOTA09/)

#include "stdio.h"
int main()
{
    int m = 0;
    scanf("%d", &m);
 
    if(m <= 100 && m >= 0)
    {
        if (m == 0)
            printf("E");
                
        if (m > 0 && m <= 35)
            printf("D");

        if (m > 35 && m <= 60)
            printf("C");
                
        if (m > 60 && m <= 85)
            printf("B");

        if (m > 85)
            printf("A");
    }
        
    return 0;
}
