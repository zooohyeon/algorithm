#include <iostream>
using namespace std;

int main() {
    int n, x = 1, cnt = 0;
    cin >> n;
    for (;;)
    {
        if (n == x) break;
        x *= 2;
        cnt ++;
    }
    cout << cnt;
    return 0;
}