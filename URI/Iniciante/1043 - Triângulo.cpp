// Problem: 1043 - Triângulo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1043)

#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
  
    cout << fixed << setprecision(1);
  
    if (a < b + c && b < a + c && c < a + c)
    {
        cout << "Perimetro = " << a + b + c << endl;
    }
    else
    {
        cout << "Area = " << ((a + b) * c) / 2 << endl;
    }
  
    return 0;
}