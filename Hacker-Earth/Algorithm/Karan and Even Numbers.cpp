// Problem: Karan and Even Numbers (http://www.hackerearth.com/problem/algorithm/karan-and-even-numbers-1/)

#include <iostream>
using namespace std;

int main()
{
    for(;;){
    	long numero = 0;
    	cin >> numero;
    	
    	if(numero == -1){
    		break;
    	}
    	
    	if(numero % 2 == 0){
    		cout << numero << endl;
    	}
    }
    
    return 0;
}
