// Problem: 1831. f91 (http://br.spoj.com/problems/F91/)

#include "stdio.h"
 
int f91(unsigned int p)
{
    if(p <= 100) 
    	printf("f91(%d) = 91\n", p);
    
    if(p >= 101) 
    	printf("f91(%d) = %d\n", p, p-10);
}
 
int main ()
{
    unsigned int a; 

    while(scanf("%d",&a) &&a)
	{
        if(a!=0)
            f91(a);
    }

    return 0;
}
