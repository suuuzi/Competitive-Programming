// Problem: 1115 - Quadrante (https://www.urionlinejudge.com.br/judge/pt/problems/view/1115)

#include <iostream>
using namespace std;
  
int main() {
  
   for(;;)
   {
        double x = 0, y = 0;
        cin >> x >> y;
  
        if(x == 0 || y == 0)
            return 0;
  
        if(x > 0 && y > 0)
            cout << "primeiro" << endl;
        else if(x < 0 && y < 0)
            cout << "terceiro" << endl;
        else if(x < 0 && y > 0)
            cout << "segundo" << endl;
        else if(x > 0 && y < 0)
            cout << "quarto" << endl;
  
       continue;
  
   }
    return 0;
}
