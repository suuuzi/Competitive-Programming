 // Problem: 8698. Garçom (http://br.spoj.com/problems/JGARCOM/)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 0, total = 0;
	cin >> n;
	int tam = 0;
	vector<int> dist;

	for(int i = 0; i < n; i++)
	{
		int lata = 0, copo= 0, r = 0;
		cin >> lata >> copo;
		
		if(lata > copo){
			dist.push_back(copo);
			tam++;
		}
	}

	for(int i = 0; i < tam; i++)
		total += dist.at(i);
	
	cout << total;
	return 0;
}

