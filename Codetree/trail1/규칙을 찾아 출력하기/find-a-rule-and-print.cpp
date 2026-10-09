#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "* ";
            }
            cout << '\n';
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j < i || j == n - 1) cout << "* ";
                else cout << "  ";
            }
            cout << '\n';
        }
    }
    return 0;
}