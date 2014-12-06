// Problem: 1048 - Aumento de Salário (https://www.urionlinejudge.com.br/judge/pt/problems/view/1048)

#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    float entrada = 0, reajuste = 0, novoSal = 0;
    float perc = 0;
    cin >> entrada;
 
 
    if(entrada <= 400) {
        perc = 15;
    } 
    else if(entrada > 400 && entrada <= 800){
        perc = 12;  
    }
    else if(entrada > 800 && entrada <= 1200){
        perc = 10;
    }
    else if(entrada > 1200 && entrada <= 2000){
        perc = 7;
    }
    else if(entrada >= 2000){
        perc = 4;
    }
 
    reajuste = (perc / 100) * entrada;
    novoSal = entrada + reajuste;
 
    cout << "Novo salario: " << fixed << setprecision(2) << novoSal << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << (int)perc << " %" << endl;
}
