#include <iostream>
using namespace std;

int main() {
    char a;
    int n;
    cin >> a >> n;
    if (a == 'A')
    {
        for (int i = 1; i <= n; i++) cout << i << ' ';
    }
    else
    {
        for (int i = n; i >= 1; i--) cout << i << ' ';
    }
    return 0;
}