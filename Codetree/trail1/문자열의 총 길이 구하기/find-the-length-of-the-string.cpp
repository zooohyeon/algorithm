#include <bits/stdc++.h>
using namespace std;

string a, s;

int main() {
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        s += a;
    }
    cout << s.length();
    return 0;
}