#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << cnt++ << ' ';
            }
            cout << '\n';
        }
        else
        {
            for (int j = cnt + (n - 1); j >= cnt; j--)
            {
                cout << j << ' ';
            }
            cout << '\n';
            cnt = cnt + n;
        }
    }
    return 0;
}