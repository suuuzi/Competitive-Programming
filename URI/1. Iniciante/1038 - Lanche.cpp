// Problem: 1038 - Lanche (https://www.urionlinejudge.com.br/judge/pt/problems/view/1038)

#include <iostream>
#include <iomanip>
using namespace std;
  
double getValorLanche(int codigo)
{
    switch(codigo)
    {
        case 1: return 4.00;
        case 2: return 4.50;
        case 3: return 5.00;
        case 4: return 2.00;
        case 5: return 1.50;
    }
  
    return 0;
}
  
int main() {
  
    int cod = 0;
    double qtd = 0;
  
    cin >> cod >> qtd;
    cout << "Total: R$ " << setiosflags (ios::fixed) << setprecision(2) << qtd * getValorLanche(cod) << endl;
  
    return 0;
}