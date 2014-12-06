// Problem: 1052 - Mês (https://www.urionlinejudge.com.br/judge/pt/problems/view/1052)

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mes[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
     
    int num = 0;
    cin >> num;
    cout << mes[num-1] << endl;
 
    return 0;
}
