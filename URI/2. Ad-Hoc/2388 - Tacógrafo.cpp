// 2388 - Tacógrafo (https://www.urionlinejudge.com.br/judge/pt/problems/view/2388)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0, total = 0;
        cin >> n;

        vector<int> dist;

        for(int i = 0; i < n; i++)
        {
                int d1 = 0, d2 = 0, r = 0;
                cin >> d1 >> d2;
                r = d1 * d2;
                dist.push_back(r);
        }

        for(int i = 0; i < n; i++)
                total += dist.at(i);

        cout << total << endl;
        cin >> n;
        return 0;
}
