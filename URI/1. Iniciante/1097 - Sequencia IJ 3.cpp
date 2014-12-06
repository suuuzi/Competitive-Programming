// Problem: 1097 - Sequencia IJ 3 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1097)

#include <iostream>
using namespace std;
  
int main() {
  
    int j = 8, i = 1;
    for(;;){
        for(int k = 1; k < 4; k ++){
            cout << "I=" << i << " J=" << (j-k) << endl;
        }
  
        j += 2;
  
        if(i == 9)
            break;  
  
        i += 2;
    } 
  
    return 0;
}
