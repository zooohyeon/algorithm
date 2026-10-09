#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 2; i <= 8; i += 2)
    {
        for (int j = b; j >= a; j--)
        {
            if (j == a)
            {
                cout << j << " * " << i << " = " << j * i << '\n';
            }
            else
            {
                cout << j << " * " << i << " = " << j * i << " / ";
            }
        }
    }
    return 0;
}