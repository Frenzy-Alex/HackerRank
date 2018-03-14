#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string s;
    cin >> n;
    getline(cin, s);
    for (int i = 0; i < n; ++i)
    {
        getline(cin, s);
        for (int j = 0; j < s.size(); j+=2)
        {
            cout << s.at(j);
        }
        cout << " ";
        for (int j = 1; j < s.size(); j+=2)
        {
            cout << s.at(j);
        }
        cout << '\n';
    }
    return 0;
}

