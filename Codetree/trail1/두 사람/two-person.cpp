#include <iostream>
using namespace std;

int main() {
    int a; char b;
    cin >> a >> b;
    if (a >= 19 && b == 'M')
    {
        cout << 1;
        return 0;
    }
    cin >> a >> b;
    if (a >= 19 && b == 'M')
    {
        cout << 1; return 0;
    }
    cout << 0;
    return 0;
}