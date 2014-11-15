// Problem: 1041 - Coordenadas de um Ponto (https://www.urionlinejudge.com.br/judge/pt/problems/view/1041)

#include <iostream>
using namespace std;
  
int main() {
  
    double x = 0, y = 0;
    cin >> x >> y;
  
    if(x > 0 && y > 0)
        cout << "Q1" << endl;
    else if(x < 0 && y < 0)
        cout << "Q3" << endl;
    else if(x < 0 && y > 0)
        cout << "Q2" << endl;
    else if(x > 0 && y < 0)
        cout << "Q4" << endl;
    else if(x == 0 && y == 0)
        cout << "Origem" << endl;
    else if(x == 0 && y != 0)
        cout << "Eixo Y" << endl;
    else if(y == 0 && x != 0)
        cout << "Eixo X" << endl;
  
    return 0;
}