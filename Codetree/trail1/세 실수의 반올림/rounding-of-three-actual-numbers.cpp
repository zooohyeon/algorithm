#include <iostream>
using namespace std;

int main() {
    int i = 3;
    double a;
    cout << fixed;
    cout.precision(3);
    while (i--)
    {
        cin >> a;
        cout << a << '\n';
    }
    return 0;
}