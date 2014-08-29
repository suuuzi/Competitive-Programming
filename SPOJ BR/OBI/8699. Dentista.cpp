// Problem: 8699. Dentista (http://br.spoj.com/problems/JDENTIST/)

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

	cout << contador;
	return 0;
}

