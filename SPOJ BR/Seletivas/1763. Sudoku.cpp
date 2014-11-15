// Problem: 1763. Sudoku (http://br.spoj.com/problems/SUDOIME/)

#include <iostream>
#include <string>
using namespace std;
 
int instancia = 0;
const int SOMA = 285;

int main()
{
    int entrada = 0;
    int matriz[9][9];
	string saida = "";
    cin >> entrada;

    for(int it = 0; it < entrada; it ++)
    {
		for(int i = 0; i < 9; i++)
			for(int j = 0; j < 9; j++) 
				cin >> matriz[i][j];
    
    
		int i, j, soma_linha[9], soma_coluna[9], soma_matriz[3][3];

		for (i = 0; i < 9; i++)
			soma_linha[i] = soma_coluna[i] = soma_matriz[i/3][i%3] = 0;
    
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++) 
			{           
				int n = matriz[i][j];
				n *= n;

				soma_linha[i] += n;
				soma_coluna[j] += n;
				soma_matriz[i/3][j/3] += n;

				if (i == 8 && soma_coluna[j] != SOMA) 
					break;
			} 
		
			if (soma_linha[i] != SOMA) 
				break;
		}

		if(saida == "")
			for (int i = 0; i < 3; i++) 
				for (int j = 0; j < 3; j++) 
					if (soma_matriz[i][j] != SOMA) 
						saida = "NAO";

        
		if(saida == "")
			saida  = "SIM";

		instancia ++;
		cout << "Instancia " << instancia << endl;		
		cout << saida << endl;
		cout << endl;
		
		saida = "";
	}
          
    return 0;
}
