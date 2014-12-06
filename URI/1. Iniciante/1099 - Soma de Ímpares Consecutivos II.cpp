// Problem: 1099 - Soma de Ímpares Consecutivos II (https://www.urionlinejudge.com.br/judge/pt/problems/view/1099)

#include <iostream>
using namespace std;
  
int getSoma(int maior, int menor)
{
    if(menor == maior)
        return 0;
  
    if((maior - menor == 2 && maior % 2 != 0) || (maior - menor == 1 && maior % 2 != 0))        
        return 0;
  
    int soma = 0;
  
    for(int i = menor + 1; i < maior; i++ )
    {
        if(i % 2 != 0)
            soma += i;
    }
  
    return soma;
}
  
int main() {
    int qtd = 0; 
    cin >> qtd;
  
    for(int i = 0; i < qtd; i ++)
    {
        int a = 0, b = 0, maior = 0, menor = 0;
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
  
        cout << getSoma(maior, menor) << endl;
    }
  
    return 0;
}
