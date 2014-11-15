// Problem: 1323 - Feynman (https://www.urionlinejudge.com.br/judge/pt/problems/view/1323)

#include <iostream>
using namespace std;
  
int main()
{
        int quadrado, n, i;
  
        while (cin >> n)
        {
            if(n == 0)
                break;
  
                quadrado = 0;
  
            for (i = 1; i <= n; i++)
                quadrado += i*i;
  
            printf("%d\n", quadrado);
        }
  
        return 0;
}