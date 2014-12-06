// Problem: 1070 - Seis Números Ímpares (https://www.urionlinejudge.com.br/judge/pt/problems/view/1070)

#include <iostream>
using namespace std;
 
int main()
{
    int entrada = 0, controle = 0;
    cin >> entrada;
 
    if(entrada % 2 == 0)
    {
        controle = 1;
    }
 
    cout << entrada + controle << endl;
    cout << entrada + controle + 2<< endl;
    cout << entrada + controle + 4 << endl;
    cout << entrada + controle + 6 << endl;
    cout << entrada + controle + 8 << endl;
    cout << entrada + controle + 10 << endl;
 
    return 0;
}
