// Problem: 1564 - Vai Ter Copa? (https://www.urionlinejudge.com.br/judge/pt/problems/view/1564)

#include <iostream>
using namespace std;
 
int main() {
    int n = 0;
     
    while(cin >> n)
    {
        if(n == 0)
            cout << "vai ter copa!" << endl;
        else if (n > 0)
            cout << "vai ter duas!" << endl;
    }
     
    return 0;
}
