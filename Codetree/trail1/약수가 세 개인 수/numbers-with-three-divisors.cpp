#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int cnt, ans = 0;
    for (int i = st; i <= ed; i++)
    {
        cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0) cnt++;
        }
        if (cnt == 3) ans++;
    }
    cout << ans;

    return 0;
}
