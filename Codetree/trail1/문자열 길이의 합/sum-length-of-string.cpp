#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    int n;
    cin >> n;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.find('a') == 0) cnt++;
        sum += s.length();
    }
    cout << sum << ' ' << cnt;
    return 0;
}