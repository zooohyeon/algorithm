#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    for (;;)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << '\n';
            cnt ++;
        }
        if (cnt == 3) return 0;
    }
    return 0;
}