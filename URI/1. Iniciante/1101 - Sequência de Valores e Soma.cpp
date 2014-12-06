// Problem: 1101 - Sequência de Valores e Soma (https://www.urionlinejudge.com.br/judge/pt/problems/view/1101)

#include <iostream>
using namespace std;
  
int getSoma(int maior, int menor)
{
    int soma = 0;
  
    for(int i = menor; i <= maior; i++ )
    {
        soma += i;
        cout << i << " ";
    }
  
    return soma;
}
  
int main() {
  
    for(; ;)
    {
        int a = 0, b = 0, maior = 0, menor = 0;
        cin >> a >> b;
  
        if(a == 0 || b == 0 || a < 0 || b < 0)
            return 0;
  
        if (a > b)
        {
            maior = a;
            menor = b;
        }
        else
        {
            menor = a;
            maior = b;
        }
  
        cout << "Sum=" <<getSoma(maior, menor) << endl;
    }
  
    return 0;
}
