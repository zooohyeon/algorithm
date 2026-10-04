#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    bool b = true;
    string str;
    cin >> str;

    for (auto a : str)
    {
        if (a == '(') s.push(a);
        else
        {
            if (s.empty()) b = false;
            else s.pop();
        }
    }
    
    if (!s.empty()) b = false;
    cout << ((b == true) ? "Yes" : "No");

    return 0;
}
