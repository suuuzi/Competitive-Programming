// Problem: 1011 - Esfera (https://www.urionlinejudge.com.br/judge/pt/problems/view/1011)

#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
    int raio = 0;
    const double pi = 3.14159;
    cin >> raio;
 
 	cout << fixed << setprecision(3) << "VOLUME = " << ((4 * (pi * (raio * raio * raio))) / 3) << endl;
 
    return 0;
}
