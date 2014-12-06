// Problem: 1133 - Resto da Divisão (https://www.urionlinejudge.com.br/judge/pt/problems/view/1133)

#include <iostream>
using namespace std;
  
int main() {
    int n1 = 0, n2 = 0;
    cin >> n1 >> n2;
  
    for(int i = ((n1 > n2) ? n2 : n1 ) + 1; i < ((n1 > n2) ? n1 : n2); i++){
        if(i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }
  
    return 0;
}
