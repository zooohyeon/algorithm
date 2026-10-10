#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (n == 0) break;
        cnt++;
        a[i] = n;
    }
    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }
    return 0;
}