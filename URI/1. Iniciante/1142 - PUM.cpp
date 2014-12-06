// Problem: 1142 - PUM (https://www.urionlinejudge.com.br/judge/pt/problems/view/1142)

#include <iostream>
using namespace std;
  
int main() {
    int n = 0;
    cin >> n;
  
    int n1 = 1, n2 = 2, n3 = 3;
  
    for(int i = 0; i < n; i++){
        cout << n1 <<  " " << n2 << " " << n3 << " PUM" << endl;
        n1 += 4;
        n2 += 4;
        n3 += 4;
    }
  
    return 0;
}
