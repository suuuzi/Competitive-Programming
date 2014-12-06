// Problem: 1051 - Imposto de Renda (https://www.urionlinejudge.com.br/judge/pt/problems/view/1051)

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double salario = 0;
    cin >> salario ;
    cout << fixed << setprecision(2);
 
    if (salario <= 2000)
        cout << "Isento" << endl;
    else
    {
        salario -= 2000;
        if (salario <= 1000)
            cout << "R$ " << 0.08 * salario << endl;
        else
        {
            salario -= 1000;
            if (salario <= 1500)
                cout << "R$ " << 0.08 * 1000 + 0.18 * salario << endl;
            else
            {
                salario -= 1500;
                cout << "R$ " << 0.08 * 1000 + 0.18 * 1500 + salario * 0.28 << endl;
            }
        }
    }
     
    return 0;
}
