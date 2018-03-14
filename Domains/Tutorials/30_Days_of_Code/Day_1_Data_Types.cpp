#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;
    cin >> i2;
    cin >> d2;
    getline(cin, s2);
    getline(cin, s2);
    i = i + i2;
    d = d + d2;
    s = s + s2;
    cout << i << '\n';
    cout << fixed << std::setprecision(1) << d << '\n';
    cout << s.c_str() << '\n';

    return 0;
}
