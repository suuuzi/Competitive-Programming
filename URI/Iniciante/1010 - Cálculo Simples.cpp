// Problem: 1010 - Cálculo Simples (https://www.urionlinejudge.com.br/judge/pt/problems/view/1010)

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int cod1 = 0, cod2 = 0, qtd1 = 0, qtd2 = 0;
    double valor1 = 0, valor2 = 0;
    cin >> cod1 >> qtd1 >> valor1;
    cin >> cod2 >> qtd2 >> valor2;
    
    cout << fixed << setprecision(2) <<  "VALOR A PAGAR: R$ " << ((qtd1 * valor1) + (qtd2 * valor2)) << endl;

    return 0;
}
