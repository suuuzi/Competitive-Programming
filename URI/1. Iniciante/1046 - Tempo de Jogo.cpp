// Problem: 1046 - Tempo de Jogo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1046)

#include <iostream>
using namespace std;
  
int main() {
    int ini = 0, fim = 0;
  
    cin >> ini >> fim;
    cout << "O JOGO DUROU " << (24 - ini) + fim << " HORA(S)" << endl;
  
    return 0;
}
