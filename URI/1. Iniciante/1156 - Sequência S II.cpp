// Problem: 1156 - Sequência S II (https://www.urionlinejudge.com.br/judge/pt/problems/view/1156)

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double s = 1;
     
    for(double i = 3, j = 2; i != 39; i += 2, j *= 2)
        s += i / j;
         
    cout << fixed << setprecision(2) << s << endl;
     
    return 0;
}
