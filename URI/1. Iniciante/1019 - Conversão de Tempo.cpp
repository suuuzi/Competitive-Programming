// Problem: 1019 - Conversão de Tempo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1019)

#include <iostream>
using namespace std;
 
int segundos = 0;
int minutos = 0;
int horas = 0;
 
void imprimir()
{
    cout << horas << ":" << minutos << ":" << segundos << endl;
}
 
void calculaSegundos(int entrada)
{
    segundos = entrada;
}
 
void calculaMinutos(int entrada)
{
    int aux = entrada;
    for(int i = 0; aux >= 60; i++)
    {
        minutos ++;
        aux -= 60;
    }
 
    if(aux > 0)
        calculaSegundos(aux);
}
 
int main()
{
    int entrada = 0;
    cin >> entrada;
 
    if(entrada <= 59)
    {
        calculaSegundos(entrada);
        imprimir();
        return 0;
    }
 
    if(entrada <= 3599)
    {
        calculaMinutos(entrada);
        imprimir();
        return 0;
    }
 
    if(entrada > 3599)
    {
        int aux = entrada;
        for(int i = 0; aux >= 3599; i++)
        {
            horas ++;
            aux -= 3600;
        }
 
        if(aux > 0){
            calculaMinutos(aux);
            aux -= (60*minutos);
        }
 
        if(aux > 0)
            calculaSegundos(aux);
 
        imprimir();
    }
 
    return 0;
}