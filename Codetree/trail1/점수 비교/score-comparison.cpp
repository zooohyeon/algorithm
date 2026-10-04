#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    cout << ((a > c && b > d) ? 1 : 0);
    return 0;
}