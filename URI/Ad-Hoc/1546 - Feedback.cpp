// Problem: 1546 - Feedback (https://www.urionlinejudge.com.br/judge/pt/problems/view/1546)

#include <iostream>
using namespace std;
  
int main()
{
    int a = 0;
    cin >> a;
  
    for(int i = 0; i < a; i ++)
    {
        int b = 0;
        cin >> b;
  
        for(int j = 0; j < b; j ++)
        {
            int c = 0;
            cin >> c;
  
            switch(c){
                case 1:
                    cout << "Rolien" << endl;
                    break;
                case 2:
                    cout << "Naej" << endl;
                    break;             
                case 3:
                    cout << "Elehcim" << endl;
                    break;             
                case 4:
                    cout << "Odranoel" << endl;
                    break;             
            }
  
        }
    }
  
    return 0;
}