#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost, cost;
    int tipProcent, taxProcent;
    cin >> mealCost >> tipProcent >> taxProcent;
    cost = mealCost + mealCost*taxProcent/100 + mealCost*tipProcent/100;
    cout << "The total meal cost is ";
    if(cost > ((int)cost)+0.5)
    {
        cout << (int)cost + 1;
    }
    else
    {
        cout << (int)cost;
    }
    cout << " dollars.\n";
    return 0;
}

