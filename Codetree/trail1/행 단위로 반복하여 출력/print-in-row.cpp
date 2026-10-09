#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        for (int j = 0; j < n; j++)
        {
            cout << cnt++;
        }
        cout << '\n';
    }
    return 0;
}