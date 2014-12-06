// Problem: 1154 - Idades (https://www.urionlinejudge.com.br/judge/pt/problems/view/1154)

#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {
    double idade = 0, qtd = 0, soma = 0;
  
    while(cin >> idade){
        if(idade < 0)
            break;
  
        soma += idade;
        qtd += 1.0;
    }
  
    cout << fixed << setprecision(2) << soma / qtd << endl;
  
    return 0;
}
