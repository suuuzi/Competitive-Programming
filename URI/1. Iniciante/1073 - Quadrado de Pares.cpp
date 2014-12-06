// Problem: 1073 - Quadrado de Pares (https://www.urionlinejudge.com.br/judge/pt/problems/view/1073)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
  
int main() {
  
    cout << setprecision(10);
  
    int entrada = 0;
    cin >> entrada;
  
    for(int i = 2; i <= entrada; i += 2){
        cout << i << "^2" << " = " << i * i << endl;
    }
  
    return 0;
}
