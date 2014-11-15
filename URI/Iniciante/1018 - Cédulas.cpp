// Problem: 1018 - Cédulas (https://www.urionlinejudge.com.br/judge/pt/problems/view/1018)

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
 
    int aux = n;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
 
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
        } else if(n >= 1){
            n1 ++;
            n -= 1;
        }
    }
    while(n > 0);
 
    cout << aux  << endl;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50  << " nota(s) de R$ 50,00"  << endl;
    cout << n20  << " nota(s) de R$ 20,00"  << endl;
    cout << n10  << " nota(s) de R$ 10,00"  << endl;
    cout << n5   << " nota(s) de R$ 5,00"   << endl;
    cout << n2     << " nota(s) de R$ 2,00" << endl;
    cout << n1     << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}