#include <iostream>
using namespace std;

int main() {
    int sum = 0, cnt = 0, a;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a >= 250) break;
        sum += a;
        cnt++;
    }
    cout << fixed; cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;
    return 0;
}