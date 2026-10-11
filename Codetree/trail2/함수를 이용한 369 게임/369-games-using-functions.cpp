#include <bits/stdc++.h>

using namespace std;

int a, b, cnt = 0;

int main() {
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        string numstr = to_string(i);
        if (i % 3 == 0 || numstr.find('3') != - 1 || numstr.find('6') != -1 || numstr.find('9') != -1) cnt++;
    }

    cout << cnt;

    return 0;
}