// Problem: 2281. Rumo aos 9s (http://br.spoj.com/problems/RUMO9S/)

#include <iostream>
#include <cstring>
using namespace std;

int calcula(char s[1000] , int grau)
{
    int soma = 0;
	for (int i = 0; i < strlen(s); ++i) 
		soma += s[i] - 48;

	if(soma < 9)
		return -1;

	if(soma > 9)
	{
		char aux[1000] = {};
		sprintf(aux, "%d", soma);	
		return calcula(aux, grau+1);
	}

	return grau;
}

int main()
{
    char entrada[1000] = {};
	cin >> entrada;

	if(entrada[0] == '0')
		return 0;

	int grau = calcula(entrada, 1);

	if(grau == -1)
		cout << entrada << " is not a multiple of 9." << endl;
	else
		cout << entrada << " is a multiple of 9 and has 9-degree " << grau << "." <<endl;
	
	main();
	return 0;
}

