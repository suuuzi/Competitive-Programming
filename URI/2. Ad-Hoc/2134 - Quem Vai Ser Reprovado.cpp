// 2134 - Quem Vai Ser Reprovado? (https://www.urionlinejudge.com.br/judge/pt/problems/view/2134)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	int instancia = 1;
	int entrada = 0;
	vector< pair<string, int> > nomes;

	while(cin >> entrada)
	{
		nomes.clear();
		for (int i = 0; i < entrada; i++)
		{
			string nome =  "";
			int nota = 0;

			cin >> nome >> nota;
			pair<string, int> p(nome, nota);
			nomes.push_back(p);
		}

		sort(nomes.begin(), nomes.end());

		string aluno = nomes[0].first;
		int menorNota = nomes[0].second;
		for(int i = 1; i < nomes.size(); i++)
		{
			if(nomes[i].second <= menorNota){
				aluno = nomes[i].first;
				menorNota = nomes[i].second;
			}

		}

		cout << "Instancia " << instancia << endl;
		cout << aluno << endl;
		instancia ++;
		cout << endl;
	}

	return 0;
}
