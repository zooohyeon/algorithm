#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << ' ';
    for (;;)
    {
        if (a % 2 == 0)
        {
            a += 3;
            if (a > b) return 0;
            cout << a << ' ';
        }
        else if (a % 2 == 1)
        {
            a *= 2;
            if (a > b) return 0;
            cout << a << ' ';
        }
    }
    return 0;
}