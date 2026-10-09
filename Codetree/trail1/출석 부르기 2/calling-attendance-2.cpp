#include <bits/stdc++.h>
using namespace std;

string name[] = {"", "John", "Tom", "Paul", "Sam"};
int main() {
    int n;
    for(;;)
    {
        cin >> n;
        if (n >= 1 && n <= 4) cout << name[n] << '\n';
        else
        {
            cout << "Vacancy";
            return 0;
        }
    }
    return 0;
}