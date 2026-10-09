#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tmp = n;
    for (int i = 1; i <= n; i++)
    {
        tmp = n * i;
        for (int j = 0; j < n; j++)
        {
            cout << tmp << ' ';
            tmp -= i;
        }
        cout << '\n';
    }
    return 0;
}