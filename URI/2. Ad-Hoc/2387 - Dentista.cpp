// 2387 - Dentista (https://www.urionlinejudge.com.br/judge/pt/problems/view/2387)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int entrada = 0;
	cin >> entrada;

	vector< pair<int, int> > horarios;
	for(int i = 0; i < entrada; i++)
	{
		int a = 0, b = 0;
		cin >> a >> b;
		horarios.push_back(make_pair(b, a));
	}

	int contador = 1;
	sort(horarios.begin(), horarios.end());
	int j = 0;

	for(int i = 1; i < entrada; i ++)
	{
		if(horarios[i].second >= horarios[j].first)
		{
			contador++;
			j = i;
		}
	}

	cout << contador << endl;
	return 0;
}
