// Problem: 1240 - Encaixa ou Não I (https://www.urionlinejudge.com.br/judge/pt/problems/view/1240)

#include <iostream>
#include <string>
using namespace std;
  
int main() {
    ios_base::sync_with_stdio(false);
    string a, b;
  
    int entrada = 0;
  
    cin >> entrada;
    for(int i = 0; i < entrada; i++)
    {
        cin >> a >> b;
        int as = a.size(), bs = b.size();
  
        if(bs <= as)
        {
            if(a.substr(as - bs, as) == b)
            {
                cout << "encaixa" << endl;
                continue;
            }
        }
        cout << "nao encaixa" << endl;
    }
  
    return 0;
}