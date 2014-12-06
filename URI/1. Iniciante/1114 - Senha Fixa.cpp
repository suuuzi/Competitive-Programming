// Problem: 1114 - Senha Fixa (https://www.urionlinejudge.com.br/judge/pt/problems/view/1114)

#include <iostream>
using namespace std;
  
int main() {
    int senha = 0;
    cin >> senha;
  
    if(senha == 2002){
        cout << "Acesso Permitido" << endl;
        return 0;
    }
  
    cout << "Senha Invalida" << endl;
    main();
  
    return 0;
}
