// Problem: 3828. Primo (http://br.spoj.com/problems/PRIMO/)

#include <cmath>
#include <iostream>

using namespace std;

bool ehPrimo(int n)
{
	if(n == 0 || n == 1) 
		return false;
	
	if(n == 2 || n == 3) 
		return true;
	
	if(n % 2 == 0) 
		return false;
	
	for(int i = 2; i <= sqrtf(n); i++)
		if(n % i == 0) 
			return false;
	
	return true;
}

int main()
{
	int a, numero = 0;
	scanf("%i", &numero);

	if (numero < 0) 
		numero *= -1;
		
	(ehPrimo(numero)) ? printf("sim") : printf("nao");
	
	return 0;
}
