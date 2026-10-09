#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = n, col = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '(' << row << ',' << col-- << ") ";
        }
        row--;
        col = n;
        cout << '\n';
    }
    return 0;
}