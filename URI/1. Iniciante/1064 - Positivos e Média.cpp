// Problem: 1064 - Positivos e Média (https://www.urionlinejudge.com.br/judge/pt/problems/view/1064)

#include <iostream>
using namespace std;
  
int main() {
    int positivos = 0;
    double soma = 0;
  
    for(int i = 0; i < 6; i++)
    {
        double num = 0.0;
        cin >> num;
  
        if(num > 0) {
            positivos ++;
            soma += num;  
        }
    }
  
    cout << positivos << " valores positivos" << endl;
    cout << soma / positivos << endl;
  
    return 0;
}
