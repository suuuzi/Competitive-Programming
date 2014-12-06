// Problem: 1113 - Crescente e Decrescente (https://www.urionlinejudge.com.br/judge/pt/problems/view/1113)

#include <iostream>
using namespace std;
  
int main() {
    int n1 = 0, n2 = 0;
    cin >> n1 >> n2;
  
    if(n1 == n2)
        return 0;
  
    if(n1 > n2)
        cout << "Decrescente" << endl;
    else
        cout << "Crescente" << endl;
  
    main();
  
    return 0;
}
