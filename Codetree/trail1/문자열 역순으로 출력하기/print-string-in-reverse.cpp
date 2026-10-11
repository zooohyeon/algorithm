#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[4];
    
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    for (int i = 3; i >= 0; i--)
    {
        cout << s[i] << '\n';
    }
    return 0;
}