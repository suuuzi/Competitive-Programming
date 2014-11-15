// Problem: 1021 - Notas e Moedas (https://www.urionlinejudge.com.br/judge/pt/problems/view/1021)

#include <iostream>
#include "stdio.h"
using namespace std;
 
int main()
{
    int n = 0, m = 0;
    scanf("%d.%d", &n, &m);
     
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;
    int m100 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;
 
    do
    {
        if(n >= 100){
            n100 ++;
            n -= 100;
        } else if(n >= 50){
            n50 ++;
            n -= 50;
        } else if(n >= 20){
            n20 ++;
            n -= 20;
        } else if(n >= 10){
            n10 ++;
            n -= 10;
        } else if(n >= 5){
            n5 ++;
            n -= 5;
        } else if(n >= 2){
            n2 ++;
            n -= 2;
        }
    }
    while(n > 1);
    do
    {
        if(n >= 1){
            m100 ++;
            n -= 1;
        } else if(m >= 50){
            m50 ++;
            m -= 50;
        } else if(m >= 25){
            m25 ++;
            m -= 25;
        } else if(m >= 10){
            m10 ++;
            m -= 10;
        } else if(m >= 5){
            m5 ++;
            m -= 5;
        } else if(m >= 1){
            m1 ++;
            m -= 1;
        }
    }
    while(m > 0);
 
    cout << "NOTAS:"  << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50  << " nota(s) de R$ 50.00"  << endl;
    cout << n20  << " nota(s) de R$ 20.00"  << endl;
    cout << n10  << " nota(s) de R$ 10.00"  << endl;
    cout << n5   << " nota(s) de R$ 5.00"   << endl;
    cout << n2     << " nota(s) de R$ 2.00" << endl; 
    cout << "MOEDAS:"  << endl;
    cout << m100 << " moeda(s) de R$ 1.00"  << endl;
    cout << m50  << " moeda(s) de R$ 0.50"  << endl;
    cout << m25    << " moeda(s) de R$ 0.25"  << endl;
    cout << m10    << " moeda(s) de R$ 0.10"    << endl;
    cout << m5     << " moeda(s) de R$ 0.05"    << endl;
    cout << m1     << " moeda(s) de R$ 0.01"    << endl;
 
    return 0;
}