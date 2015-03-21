// Problem: Angry Professor (https://www.hackerrank.com/challenges/angry-professor)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int testCases = 0, students = 0, min = 0;
    cin >> testCases;

    for(int i = 0; i < testCases; i++){
        cin >> students >> min;

        int sum = 0;
        for(int j = 0; j < students; j ++){
            int aux = 0;
            cin >> aux;

            if(aux <= 0)
              sum ++;
        }

        if(sum >= min){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
