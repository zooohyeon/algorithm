#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        int prod = 1;
        for (int i = a; i <= b; i++)
        {
            prod *= i;
        }
        cout << prod << '\n';
    }
    return 0;
}