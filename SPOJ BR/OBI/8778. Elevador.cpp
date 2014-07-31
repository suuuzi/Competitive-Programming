// Problem: 8778. Elevador (http://br.spoj.com/problems/ELEVADO2/)

#include <iostream>
using namespace std;

int main()
{
	int qtdLeituras = 0, capMaxima = 0, total = 0;
	cin >> qtdLeituras >> capMaxima;
	bool estourouCap = false;
	
	for(int i = 0; i < qtdLeituras; i++)
	{
		int saiu = 0, entrou = 0;
		cin >> saiu >> entrou;
		
		total -= saiu;
		total += entrou;
		
		if(total > capMaxima){
			estourouCap = true;
			break;
		}

	}
	
	if(estourouCap)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}
