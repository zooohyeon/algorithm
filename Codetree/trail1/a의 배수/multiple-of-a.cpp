#include <iostream>
using namespace std;

int main() {
    int N, a;
    cin >> N >> a;
    for (int i = 1; i <= N; i++)
    {
        if (i % a == 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}