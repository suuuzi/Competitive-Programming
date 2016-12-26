// 2293 - Campo de minhocas (https://www.urionlinejudge.com.br/judge/pt/problems/view/2293)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    long linha = 0, coluna = 0, maior = 0;
	long campo[100][100];
	memset(campo, 0, 100);

	cin >> linha >> coluna;

	for(long i = 0; i < linha; i++)
	{
		for(long j = 0; j < coluna; j++)
		{
			cin >> campo[i][j];
		}
	}

	//verifica colunas
	for(long i = 0; i < coluna; i++)
	{
		long total = 0;

		for (long j = 0; j < linha; j++)
			total += campo[j][i];

		if(total > maior)
			maior = total;
	}

	//verifica linhas
	for(long i = 0; i < linha; i++)
	{
		long total = 0;

		for (long j = 0; j < coluna; j++)
			total += campo[i][j];

		if(total > maior)
			maior = total;
	}

	cout << maior << endl;

	return 0;
}
