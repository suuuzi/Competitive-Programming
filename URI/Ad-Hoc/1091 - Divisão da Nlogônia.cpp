// Problem: 1091 - Divisão da Nlogônia (https://www.urionlinejudge.com.br/judge/pt/problems/view/1091)

#include <iostream>
using namespace std;
  
int main() {
  
    int qtd = 0;
    cin >> qtd;
  
    if(qtd == 0)
        return 0;
  
    int x = 0, y = 0;
    cin >> x >> y;
  
    for(int i = 0; i < qtd; i ++)
    {
  
        int a = 0, b = 0;
        cin >> a >> b;
  
        if(a == x || b == y)
            cout << "divisa" << endl;
        else if(a > x && b > y)
            cout << "NE" << endl;
        else if(a < x && b < y)
            cout << "SO" << endl;
        else if(a < x && b > y)
            cout << "NO" << endl;
        else if(a > x && b < y)
            cout << "SE" << endl;
  
    }
  
    main();
  
    return 0;
}