// Problem: 1072 - Intervalo 2 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1072)

#include <iostream>
using namespace std;
  
int main() {
  
    int in = 0, out = 0, entrada = 0;
    cin >> entrada;
  
    for(int i = 0; i < entrada; i ++)
    {
        int num = 0;
        cin >> num;
  
        num >= 10 && num <= 20 ? in ++ : out++;
  
    }
  
    cout << in << " in" << endl;
    cout << out << " out" << endl;
  
    return 0;
}
