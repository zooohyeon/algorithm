#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;
    for (;;)
    {
        cin >> a >> b >> c;
        cout << a * b << '\n';
        if (c == 'C') return 0;
    }
    return 0;
}