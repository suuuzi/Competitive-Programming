// Problem: 1011 - Esfera (https://www.urionlinejudge.com.br/judge/pt/problems/view/1011)

#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
    double raio = 0;
    const double pi = 3.14159;
    cin >> raio;
    
    double r3 = raio * raio * raio;
    double v1 = (4.0 / 3.0);
    double volume = v1 * pi * r3;

 	cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
 
    return 0;
}
