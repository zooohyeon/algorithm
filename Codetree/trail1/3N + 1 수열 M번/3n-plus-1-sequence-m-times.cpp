#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        int cnt = 0;
        for (;;)
        {
            if (m == 1) break;
            if (m % 2 == 0) m /= 2;
            else m = m * 3 + 1;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}