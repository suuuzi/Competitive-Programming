// Problem: 812. Bits Trocados (BIT)

#include <iostream>
using namespace std;
int contador = 0;

int main() 
{ 
	int v = 0, c = 0, c1 = 0, c2 = 0, c3 = 0; 
	cin >> v;
	
	if (v == 0)
		return 0;
	
	while(v > 0) 
	{ 
		if(v >= 50) 
		{ 
			v = v - 50; 
			c++; 
		} 
		else if(v >= 10) 
		{ 
			v = v - 10; 
			c1++; 
		} 
		else if(v >= 5) 
		{ 
			v = v - 5; 
			c2++; 
		} 
		else if(v >= 1) 
		{ 
			v = v - 1; 
			c3++; 
		} 
	} 
	contador ++;
	
	cout << "Teste " << contador << endl;
	cout << c << " " << c1 << " " << c2 << " " << c3 << endl;
	cout << endl;

	main();
	return 0;
} 
 
