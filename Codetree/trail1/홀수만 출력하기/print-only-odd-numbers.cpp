#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a % 2 == 1 && a % 3 == 0) cout << a << '\n';
    }
    return 0;
}