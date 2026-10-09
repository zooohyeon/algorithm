#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (;;)
    {
        if (n == 1) break;
        cnt++;
        if (n % 2 == 0) n /= 2;
        else n = (n * 3) + 1;
    }
    cout << cnt;
    return 0;
}