#include <iostream>
using namespace std;

int main() {
    int a, b, c, min;
    cin >> a >> b >> c;
    min = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b : c;
    cout << ((a == min) ? 1 : 0) << ' ';
    cout << ((a == b & b == c) ? 1 : 0);
    return 0;
}