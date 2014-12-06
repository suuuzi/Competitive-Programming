// Problem: 1153 - Fatorial Simples (https://www.urionlinejudge.com.br/judge/pt/problems/view/1153)

#include <iostream>
using namespace std;
  
int fat(int n)
{
    if(n == 0) 
        return 1;
    else
        return n * fat(n-1);
}

int main()
{
    int num = 0;
    cin >> num;
  
    if(num > 12) 
        return 0;
    else
        cout << fat(num) << endl;
  
    return 0;
}
