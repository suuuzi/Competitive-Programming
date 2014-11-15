// Problem: 2839. Popularidade (http://br.spoj.com/problems/POPULAR/)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int entrada = 0, maior = 0;
	int votos[100][100];
	memset(votos, 0, 100);

	cin >> entrada;

	if(entrada == 0)
		return 0;
	
	for(int i = 0; i < entrada; i++)
	{
		for(int a = 0; a < entrada; a ++)
		{
			cin >> votos[i][a];
		}
	}

	
	for(int i = 0; i < entrada; i++)
	{
		int total = 0;

		for (int j = 0; j < entrada; j++)
			total += votos[j][i];

		if(total > maior)
			maior = total;
	}

	cout << maior << endl;
	maior = 0;

	main();
    return 0;
}
