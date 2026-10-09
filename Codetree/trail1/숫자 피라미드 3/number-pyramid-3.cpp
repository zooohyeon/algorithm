#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt;
    for (int i = 1; i <= n; i++)
    {
        cnt = i;
        for (int j = 1; j <= i; j++)
        {
            cout << cnt << ' ';
            cnt += i;
        }
        cout << '\n';
    }
    return 0;
}