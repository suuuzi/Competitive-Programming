// Problem: 1155 - Sequência S (https://www.urionlinejudge.com.br/judge/pt/problems/view/1155)

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double s = 1;
     
    for(double i = 2; i < 101; i++)
        s += 1 / i;
         
    cout << fixed << setprecision(2) << s << endl;
     
    return 0;
}
