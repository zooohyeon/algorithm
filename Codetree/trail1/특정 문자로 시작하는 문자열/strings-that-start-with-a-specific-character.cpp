#include <bits/stdc++.h>
using namespace std;

string s[20];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    char a;
    cin >> a;
    int cnt = 0;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == a)
        {
            cnt++;
            sum += s[i].length();
        }
    }

    cout << fixed; cout.precision(2);
    cout << cnt << ' ' << sum / cnt;

    return 0;
}