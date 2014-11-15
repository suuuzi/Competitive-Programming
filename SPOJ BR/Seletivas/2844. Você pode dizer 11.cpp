// Problem: 2844. Você pode dizer 11 (http://br.spoj.com/problems/ONZE/)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char entrada[1000] = {};
	unsigned long pares = 0;
	unsigned long impares = 0;
		
	cin >> entrada;
	
	bool par = true;
	
	for(int x = 0; x < strlen(entrada); x ++)
	{ 
		if(par)
		{
			pares += entrada[x] -48;
			par = false;
		}
		else
		{
			impares += entrada[x] -48;
			par = true;
		}
	}	
	
	if(pares + impares == 0)
		return 0;

	if((pares % 11) == (impares % 11))
		cout << entrada << " is a multiple of 11." << endl;
	else 
		cout << entrada << " is not a multiple of 11." << endl;	
	
	main();
	return 0;
}

