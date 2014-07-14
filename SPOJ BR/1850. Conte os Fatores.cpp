// Problem: 1850. Conte os Fatores (http://br.spoj.com/problems/CFATORES)

#include <iostream>
#include <map>
using namespace std;

int getProximoPrimo(int n)
{
	if ((n != -1 % (n + 1))) 
    return n + 1;
		
  return getProximoPrimo(n + 1);
}

int contaFatores(int n)
{ 
  map<int,int> primos;
   
  for (int i = 2; n != 1;)
  {
    if (n % i == 0) 
    { 
       primos[i] = 1;
       n /= i; 
    }
    else
    {
       i  = getProximoPrimo(i);
    }      
  }
   
  return primos.size();
}

int main (){
   int n = 0;
     
   while (cin >> n)
   {
      if (n == 0) 
      	return 0;
      	
      cout << n << " : " << contaFatores(n) << endl;
   }
   
   return 0;
}
