#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = b; j >= a; j -= 2)
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