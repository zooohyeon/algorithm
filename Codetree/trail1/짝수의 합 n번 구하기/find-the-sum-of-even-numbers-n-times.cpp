#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = 0;
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0) sum += i;
        }

        cout << sum << '\n';

    }
    return 0;
}