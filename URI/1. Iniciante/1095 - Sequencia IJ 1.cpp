// Problem: 1095 - Sequencia IJ 1 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1095)

#include <iostream>
using namespace std;
 
int main() {
 
    int j = 60, i = 1;
    for(;j != -5;){
            cout << "I=" << i << " J=" << j << endl;
             j -= 5; 
             i += 3;
    } 
 
    return 0;
}
