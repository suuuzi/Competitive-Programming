// Problem: 1759 - Ho Ho Ho (https://www.urionlinejudge.com.br/judge/pt/problems/view/1759)

#include <iostream>
#include <string>
using namespace std;

int main() {
    int qtd = 0;
    cin >> qtd;
    string output = "";

    for(int i = 0; i < qtd; i++){
        output += "Ho";
        output += ((qtd - 1) == i) ? "!" : " ";
    }

    cout << output << endl;

    return 0;
}
