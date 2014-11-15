// Problem: 1259 - Pares e Ímpares (https://www.urionlinejudge.com.br/judge/pt/problems/view/1259)

#include <iostream>
using namespace std;
 
int cmp(const void *a, const void *b)
{
    const int *aa = (const int *)a;
    const int *bb = (const int *)b;
      
    if (!(*aa & 1))
    {
        if (!(*bb & 1))
            return *aa - *bb;
        else
            return -1;
    }
     
    if (!(*bb & 1))
        return 1;
         
    return *bb - *aa;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
     
    int n, i;
    int a[100000];
    cin >> n;
      
    for (i = 0; i < n; ++i)
        cin >> a[i];
     
    qsort(a, n, sizeof(int), cmp);
      
    for(i = 0; i < n; ++i)
        cout << a[i] << endl;
}