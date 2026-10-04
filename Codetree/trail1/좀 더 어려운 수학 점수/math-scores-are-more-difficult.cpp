#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        cout << ((b > d) ? "A" : "B");
    }
    else
    {
        cout << ((a > c) ? "A" : "B");
    }
    return 0;
}