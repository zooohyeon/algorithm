#include <bits/stdc++.h>
using namespace std;

string s[] = {"apple", "banana", "grape", "blueberry", "orange"};

int main() {
    int cnt = 0;
    char c;
    cin >> c;
    for (int i = 0; i < 5; i++)
    {
        if (s[i][2] == c || s[i][3] == c)
        {
            cout << s[i] << '\n';
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}