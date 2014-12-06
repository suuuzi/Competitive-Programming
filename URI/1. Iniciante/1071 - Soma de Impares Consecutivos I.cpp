// Problem: 1071 - Soma de Impares Consecutivos I (https://www.urionlinejudge.com.br/judge/pt/problems/view/1071)

#include <iostream>
using namespace std;
  
int main() {
    int a = 0, b = 0, soma = 0, maior = 0, menor = 0;
    cin >> a >> b;
  
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
  
    for(int i = menor + 1; i < maior; i++ )
    {
        if(i % 2 != 0)
            soma += i;
    }
  
    cout << soma << endl;
  
    return 0;
}
