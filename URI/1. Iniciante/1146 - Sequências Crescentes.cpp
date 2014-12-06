// Problem: 1146 - Sequências Crescentes (https://www.urionlinejudge.com.br/judge/pt/problems/view/1146)

#include <iostream>
using namespace std;
 
int getSoma(int maior, int menor)
{
    int soma = 0;
     
    for(int i = menor; i <= maior; i++ )
    {
        soma += i;
        cout << i;
         
        if(i != maior)
            cout << " ";
    }
     
    return soma;
}
 
int main() {
 
    for(; ;)
    {
        int maior = 0;
        cin >> maior;
         
        if(maior == 0)
            return 0;
         
        getSoma(maior, 1);
        cout << endl;
    }
     
     
    return 0;
}
