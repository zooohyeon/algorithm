#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[2][2] = {{"MAN" , "BOY"} , {"WOMAN" , "GIRL"}};
    int a, b;
    cin >> a >> b;
    b = (b >= 19) ? 0 : 1;
    cout << s[a][b];
    return 0;
}