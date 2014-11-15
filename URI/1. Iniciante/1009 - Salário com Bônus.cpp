// Problem: 1009 - Salário com Bônus (https://www.urionlinejudge.com.br/judge/pt/problems/view/1009)

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char nome[100] = "";
    double fixo = 0, vendas = 0;
    cin >> nome >> fixo >> vendas;
    
    cout << fixed << setprecision(2) << "TOTAL = R$ " << (fixo + (vendas * 0.15)) << endl;

    return 0;
}
