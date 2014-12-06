// Problem: 1060 - Números Positivos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1060)

#include <iostream>
using namespace std;
 
int main() {
    int positivos = 0;
     
    for(int i = 0; i < 6; i++)
    {
        double num = 0.0;
        cin >> num;
 
        if(num > 0)
            positivos ++;
    }
     
    cout << positivos << " valores positivos" << endl;
     
    return 0;
}
