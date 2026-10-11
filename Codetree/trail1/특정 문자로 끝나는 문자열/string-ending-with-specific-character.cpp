#include <bits/stdc++.h>

using namespace std;

string s[10];

int main() {
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    int cnt = 0;
    char a;
    cin >> a;

    for (int i = 0; i< 10; i++)
    {
        if (s[i][s[i].length() - 1] == a)
        {
            cout << s[i] << '\n';
            cnt++;
        }
    }
    if (cnt == 0) cout << "None";

    return 0;
}