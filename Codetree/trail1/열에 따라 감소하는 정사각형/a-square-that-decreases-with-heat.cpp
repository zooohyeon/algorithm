#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int input = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << input-- << ' ';
        }
        cout << '\n';
        input = n;
    }
    return 0;
}