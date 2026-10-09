#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int od = 1, ev = n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < od; j++)
            {
                cout << "* ";
            }
            od++;
            cout << '\n';
        }
        else
        {
            for (int j = 0; j < ev; j++)
            {
                cout << "* ";
            }
            ev--;
            cout << '\n';
        }
    }
    return 0;
}