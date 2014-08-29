// Problem: 2846. Paridade (http://br.spoj.com/problems/PARIDADE/)

#include <iostream>
using namespace std;
int paridade;

void binary(unsigned int number) {
	unsigned int remainder;

	if(number <= 1) {
		
		if(number == 1)
			paridade ++;		

		cout << number;

		return ;
	}

	remainder = number%2;
	binary(number >> 1);  

	if(remainder == 1)
		paridade ++;

	cout << remainder;

}

int main(void) {
	unsigned int entrada;

	cin >> entrada;

	if(entrada == 0)
		return 0;

	cout << "The parity of " ;
	binary(entrada);
	cout << " is " << paridade << " (mod 2)." << endl;


	paridade = 0;
	main();
	return 0;
}
