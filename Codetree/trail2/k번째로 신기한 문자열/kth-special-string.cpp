#include <bits/stdc++.h>

using namespace std;

int n, k;
string t;
string str[100];
string str2[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i].find(t) == 0)
        {
            str2[cnt++] = str[i];
        }
    }

    sort(str2, str2 + cnt);

    cout << str2[k - 1];

    return 0;
}