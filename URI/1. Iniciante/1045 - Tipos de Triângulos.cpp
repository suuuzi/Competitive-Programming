// Problem: 1045 - Tipos de Triângulos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1045)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
  
bool regra(double i, double j) { return i > j; }
  
int main() {
    vector<double> v;
  
    for(int i = 0; i < 3; i ++){
        double a = 0;
        cin >> a;
        v.push_back(a);
    }
  
    sort(v.begin(), v.end(), regra);
  
    if(v[0] >= v[1] + v[2]){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
	    if((v[0] * v[0]) == (v[1] * v[1]) + (v[2] * v[2]))
	        cout << "TRIANGULO RETANGULO" << endl;
	  
	    if((v[0] * v[0]) > (v[1] * v[1]) + (v[2] * v[2]))
	        cout << "TRIANGULO OBTUSANGULO" << endl;
	  
	    if((v[0] * v[0]) < (v[1] * v[1]) + (v[2] * v[2]))
	        cout << "TRIANGULO ACUTANGULO" << endl;
	  
	    if(v[0] == v[1] && v[1] == v[2]) {
	        cout << "TRIANGULO EQUILATERO" << endl;
	  	} else {
	    	if(v[0] == v[1] || v[0] == v[2] || v[1]  == v[2])
	        	cout << "TRIANGULO ISOSCELES" << endl;
	    }
    }
  
    return 0;
}
