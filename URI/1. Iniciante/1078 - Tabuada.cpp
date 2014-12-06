// Problem: 1078 - Tabuada (https://www.urionlinejudge.com.br/judge/pt/problems/view/1078)

#include <iostream>
using namespace std;
  
int main() {
  
    int entrada = 0;
    cin >> entrada;
  
    for(int i = 1; i <= 10; i ++)
        cout << i << " x " << entrada << " = " << i * entrada << endl;
  
    return 0;
}
