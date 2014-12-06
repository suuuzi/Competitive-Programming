// Problem : 1066 - Pares, Ímpares, Positivos e Negativos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1066)

#include <iostream>
using namespace std;
 
int par = 0;
int impar = 0;
int positivo = 0;
int negativo = 0;
 
void atualizaContagem(int i)
{
    (i % 2 == 0) ? par ++ : impar++ ;
    (i > 0) ? positivo ++ : negativo ++;
}
 
int main() {
    int a = 0;
     
    for(int i = 0; i < 5; i ++)
    {
        cin >> a;
        atualizaContagem(a);
         
        if(a == 0)
            negativo--;
    }
     
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
    return 0;
}
