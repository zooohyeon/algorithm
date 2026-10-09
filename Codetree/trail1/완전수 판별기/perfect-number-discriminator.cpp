#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 6 || n == 28 || n == 496) cout << 'P';
    else cout << 'N';
    return 0;
}