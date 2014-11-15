// Problem: 1247 - Guarda Costeira (https://www.urionlinejudge.com.br/judge/pt/problems/view/1247)

#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int d = 0, vf = 0, vg = 0;
    double distancia = 0, tf = 0, tg = 0;
 
    while(scanf("%d %d %d", &d, &vf, &vg) != EOF){
        distancia = sqrt(12 * 12 + d * d);
        tf = 12.0 / vf;
        tg = distancia / vg;
         
        if (tf >= tg)
            cout << "S";
        else
            cout << "N";
             
        cout << endl;
    }
     
    return 0;
}