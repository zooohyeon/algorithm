#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tmp = 11;
    for (int i = 0; i < n; i++)
    {
        tmp = 11 + (2 * i);
        for (int j = 0; j < n; j++)
        {
            cout << tmp << ' ';
            tmp += 2;
        }
        cout << '\n';
    }
    return 0;
}