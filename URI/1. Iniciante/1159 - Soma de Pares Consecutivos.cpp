// Problem: 1159 - Soma de Pares Consecutivos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1159)

#include <iostream>
using namespace std;
  
void imprimePares(int n)
{
    int soma = 0,
        i = (n % 2 == 0) ? n : n + 1,
        cont = 1;
  
    for(; cont < 6 ; i += 2, cont ++)
        soma += i;
  
    cout << soma << endl;
}
  
int main() {
    int entrada = 0;
  
    while(cin >> entrada && entrada != 0)
        imprimePares(entrada);
  
    return 0;
}
