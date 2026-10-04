#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        string a;
        int dat;
        cin >> a;
        if (a == "push")
        {
            cin >> dat;
            s.push(dat);
        }
        else if (a == "size") cout << s.size() << '\n';
        else if (a == "empty") cout << s.empty() << '\n';
        else if (a == "pop")
        {
            cout << s.top() << '\n';
            s.pop();
        }
        else if (a == "top") cout << s.top() << '\n';
    }

    return 0;
}
