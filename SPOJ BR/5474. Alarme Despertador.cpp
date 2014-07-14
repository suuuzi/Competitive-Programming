// Problem: 5474. Alarme Despertador (ALADES)

#include <iostream>
using namespace std;

int main()
{
    int h1 = 0, m1 = 0, h2 = 0, m2 = 0;
    cin >> h1 >> m1 >> h2 >> m2;

	  if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)
		  return 0;

    if(h1 == 0 && h2 !=0)
		  h1 = 24;

  	int tempo1 = 0, tempo2 = 0;
  	tempo1 = (h1 * 60) + m1;
  	tempo2 = (h2 * 60) + m2;
  
  	if(h1 > h2 || (h1 == h2 && (m1 > m2)))
  	  tempo2+=1440;
  		
  	cout << tempo2 - tempo1 << endl;
  
  	main();
  	return 0;
}
