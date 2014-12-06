// Problem: 1. Life, the Universe, and Everything (http://www.spoj.com/problems/TEST/)

#include <iostream>
using namespace std;
 
int main() {
	int n = 0;
	cin >> n;
 
	if(n == 42)
		return 0;
 
	cout << n << endl;
 
	main();
	return 0;
}
