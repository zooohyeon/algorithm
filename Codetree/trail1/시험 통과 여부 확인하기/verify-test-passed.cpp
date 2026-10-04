#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 80) cout << 80 - N << " more score";
    else cout << "pass";
    return 0;
}