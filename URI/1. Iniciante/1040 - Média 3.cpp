// Problem: 1040 - Média 3 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1040)

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double n1 = 0, n2 = 0, n3 = 0, n4 = 0, exame = 0;
    cin >> n1 >> n2 >> n3 >> n4;
     
    double media = (2 * n1 + 3 * n2 + 4 * n3 + n4) / 10;
    cout << fixed << setprecision(1);
     
    cout << "Media: " << media << endl;
     
    if (media >= 7.0)
        cout << "Aluno aprovado." << endl;
    else    
        if (media >= 5.0){
            cout << "Aluno em exame." << endl;
            cin >> exame;
             
            cout << "Nota do exame: " << exame << endl;
            media = (media + exame) / 2;
             
            if (media >= 5.0)
                cout << "Aluno aprovado." << endl;
            else
                cout << "Aluno reprovado." << endl;
        }       
        else {
            cout << "Aluno reprovado." << endl;
        }
         
        cout << "Media final: " << media << endl;
 
    return 0;
}