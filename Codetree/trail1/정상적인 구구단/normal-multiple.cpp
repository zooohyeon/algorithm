#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n)
            {
                cout << i << " * " << j << " = " << i * j << '\n';
            }
            else
            {
                cout << i << " * " << j << " = " << i * j << ", ";
            }
        }
    }
    return 0;
}