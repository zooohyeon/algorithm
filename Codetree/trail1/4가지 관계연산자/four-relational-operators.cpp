#include <iostream>
using namespace std;

int main() {
    int a , b;
    cin >> a >> b;
    cout << ((a >= b) ? 1 : 0) << '\n';
    cout << ((a > b) ? 1 : 0) << '\n';
    cout << ((b >= a) ? 1 : 0) << '\n';
    cout << ((b > a) ? 1 : 0) << '\n';
    return 0;
}