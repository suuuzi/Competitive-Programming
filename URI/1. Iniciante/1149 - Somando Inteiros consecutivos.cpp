// Problem: 1149 - Somando Inteiros consecutivos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1149)

#include <iostream>
using namespace std;
 
int main() {
    int a = 0, n = 0, soma = 0;
     
    cin >> a >> n;
     
    while(n < 1)
        cin >> n;
     
    for(int i = 0; i < n; i++, a++){
        soma += a;
    }
         
    cout << soma << endl;
     
    return 0;
}
