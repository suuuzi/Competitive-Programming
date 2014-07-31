// Problem: 10866. Transporte (http://br.spoj.com/problems/TRANSP11/)

#include <stdio.h> 
 
int main() 
{ 
    	int a = 0,  b = 0, c = 0, x = 0, y = 0, z = 0;
      scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
      printf("%d\n", (x/a)*(y/b)*(z/c)); 
 
      return 0; 
}
