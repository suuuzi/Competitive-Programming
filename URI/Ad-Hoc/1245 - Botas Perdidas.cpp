// Problem: 1245 - Botas Perdidas (https://www.urionlinejudge.com.br/judge/pt/problems/view/1245)

#include <iostream>
#include <cstring>
using namespace std;
  
int main()
{
    int botas[31][2], qtd_botas, pares, num;
    char pe;
  
    while(cin >> qtd_botas)
    {
        memset(botas, 0, sizeof(botas));
        for (int i = 0; i < qtd_botas; i++)
        {
            cin >> num >> pe;
  
            if (pe == 'E')
                botas[num - 30][0]++;
            else
                botas[num - 30][1]++;
        }
        pares = 0;
  
        for (int i = 0; i < 31; i++)
            pares += min(botas[i][0], botas[i][1]);
  
        cout << pares << endl;
    }
  
    return 0;
}