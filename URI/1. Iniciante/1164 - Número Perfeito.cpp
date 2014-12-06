// Problem: 1164 - Número Perfeito (https://www.urionlinejudge.com.br/judge/pt/problems/view/1164)

#include <iostream>
using namespace std;
bool ehPerfeito(int n)
{
    int soma = 0;
    for(int i = 1; n > soma; i++){
        soma += i;
         
        if(soma == n)
            return true;
    }
     
    return false;
}
 
int main() {
    int qtd = 0;
    cin >> qtd;
     
    while(qtd){
        qtd--;
         
        int n = 0;
        cin >> n;
         
        if(ehPerfeito(n) && n != 1)
            cout << n << " eh perfeito" << endl;
        else
            cout << n << " nao eh perfeito" << endl;
    }
     
    return 0;
}
