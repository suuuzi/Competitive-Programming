// Problem: 1124 - Elevador (https://www.urionlinejudge.com.br/judge/pt/problems/view/1124)

#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int l = 0, c = 0, r1 = 0, r2 = 0, maior = 0;
    char saida = 'N';
    cin >> l >> c >> r1  >> r2;
 
    if((l+c+r1+r2) == 0)
        return 0;
         
    if(r1 > r2)
        maior = r1+r1;
    else
        maior = r2+r2;
     
    if(maior <= l && maior <= c)
    {
        if(sqrt(pow((l - r2 - r1),2)+pow((c - r2 - r1),2)) >=  r1 + r2)
        {
            saida = 'S';
        }
    }
     
    cout << saida << endl;
     
    main();
    return 0;
}