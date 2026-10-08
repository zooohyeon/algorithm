#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = b; i >= a; i--) cout << i << ' ';
    return 0;
}