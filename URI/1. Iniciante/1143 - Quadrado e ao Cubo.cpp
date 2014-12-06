// Problem: 1143 - Quadrado e ao Cubo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1143)

#include <iostream>
using namespace std;
 
int main() {
    int a = 0;
    cin >> a;
     
    for(int i = 1; i <= a; i++)
        cout << i << " " << i * i << " " << i * i * i << endl;
     
    return 0;
}
