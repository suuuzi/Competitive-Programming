// - 2434 - Saldo do vovô (https://www.urionlinejudge.com.br/judge/pt/problems/view/2434)
#include <iostream>
using namespace std;

int main()
{
	int e = 0, saldo = 0, novoSaldo = 0;
	cin >> e  >> saldo;
	novoSaldo = saldo;

	for(int i = 0; i < e; i ++)
	{
		int val = 0;
		cin >> val;

		novoSaldo += val;
		if(novoSaldo <= saldo) {
			saldo = novoSaldo;
		}
	}

	cout << saldo << endl;
	return 0;
}
