// Problem: 1074 - Par ou Ímpar (https://www.urionlinejudge.com.br/judge/pt/problems/view/1074)

#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {
  
    int entrada = 0;
    cin >> entrada;
  
    for(int i = 0; i < entrada; i ++)
    {
        int numero  = 0;
        cin >> numero;
  
        if(numero == 0)
        {
            cout << "NULL" << endl;
            continue;
        }
  
        if(numero < 0)
        {
            if((numero*-1) % 2 == 0)
                cout << "EVEN NEGATIVE" << endl;
            else
                cout << "ODD NEGATIVE" << endl;
  
            continue;
        }
  
        if(numero > 0)
        {
            if((numero*-1) % 2 == 0)
                cout << "EVEN POSITIVE" << endl;
            else
                cout << "ODD POSITIVE" << endl;
  
            continue;       
        }
  
    }
  
    return 0;
}
