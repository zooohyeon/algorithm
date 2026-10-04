#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[4] = {"", "John", "Tom", "Paul"};
    int a;
    cin >> a;
    cout << ((a > 3) ? "Vacancy" : s[a]);
    return 0;
}