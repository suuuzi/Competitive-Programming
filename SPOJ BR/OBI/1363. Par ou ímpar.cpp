// Problem: 1363. Par ou ímpar (http://br.spoj.com/problems/PAR/)

#include <iostream>
#include <vector>
using namespace std;
int instancia = 0;
 
int main()
{
    int qtd = 0;
    cin >> qtd;
    
    if(qtd != 0){
        char jog1[11], jog2[11];
        cin >> jog1 >> jog2;
 
        vector<int> ganhador;      
        
        for(int i = 0; i < qtd; i++)
        {
            int e1 = 0, e2 = 0;
            cin >> e1 >> e2;
            
            int result = e1 + e2;
            ganhador.push_back((result % 2 == 0) ? 1 : 2);
        }
        
        instancia ++;
        cout << "Teste " << instancia << endl;

        for(int i = 0; i < ganhador.size(); i++)
        {
            printf("%s\n", (ganhador.at(i) == 1) ? jog1 : jog2);
        }    

        cout << "\n";
        
        main();
    }
 
    return 0;
}
