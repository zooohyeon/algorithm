#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 90)
    {
        cout << ((b >= 95) ? 100000 : (b >= 90) ? 50000 : 0);
    }
    else cout << 0;
    return 0;
}