// Problem: 1075 - Resto 2 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1075)

#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {
  
    int entrada = 0;
    cin >> entrada;
  
    for(int i = 0; i < 10000; i ++)
    {
        if(i % entrada == 2)
            cout << i << endl;
    }
  
    return 0;
}
