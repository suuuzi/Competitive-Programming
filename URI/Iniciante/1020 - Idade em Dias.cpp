// Problem: 1020 - Idade em Dias (https://www.urionlinejudge.com.br/judge/pt/problems/view/1020)

#include <iostream>
using namespace std;
 
int anos = 0;
int meses = 0;
int dias = 0;
 
void imprimir()
{
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
}
 
void calculaDias(int entrada)
{
    dias = entrada;
}
 
void calculaMeses(int entrada)
{
    int aux = entrada;
    for(int i = 0; aux >= 30; i++)
    {
        meses ++;
        aux -= 30;
    }
}
 
int main()
{
    int entrada = 0;
    cin >> entrada;
 
    if(entrada <= 29)
    {
        calculaDias(entrada);
        imprimir();
        return 0;
    }
 
    if(entrada <= 359)
    {
        calculaMeses(entrada);
        imprimir();
        return 0;
    }
 
    if(entrada > 364)
    {
        int aux = entrada;
        for(int i = 0; aux >= 364; i++)
        {
            anos ++;
            aux -= 365;
        }
 
        if(aux > 0){
            calculaMeses(aux);
            aux -= (30*meses);
        }
 
        if(aux > 0)
            calculaDias(aux);
 
        imprimir();
    }
 
    return 0;
}