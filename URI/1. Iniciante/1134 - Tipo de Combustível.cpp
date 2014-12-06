// Problem: 1134 - Tipo de Combustível (https://www.urionlinejudge.com.br/judge/pt/problems/view/1134)

#include <iostream>
using namespace std;
  
int main() {
  
    int alcool = 0, gasolina = 0, diesel = 0;
  
    for(;;)
    {
        int entrada = 0;
        cin >> entrada;
  
        if(entrada == 4)
            break;
  
        switch(entrada)
        {
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
            default: break;
        }
    }
  
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
  
    return 0;
}
