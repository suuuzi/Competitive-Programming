// Problem: 1042 - Sort Simples (https://www.urionlinejudge.com.br/judge/pt/problems/view/1042)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
int main() {
  
    vector <int> v, bkp;
    int n = 0;
  
    for(int i = 0; i < 3; i ++){
        cin >> n;
        bkp.push_back(n);
        v.push_back(n);
    }
  
    sort(v.begin(), v.begin()+3);
  
    for (int i = 0; i < 3; i ++)
        cout << v[i] << endl;
  
    cout << endl;
  
    for (int i = 0; i < 3; i ++)
        cout << bkp[i] << endl;   
  
    return 0;
}