#include <iostream>
using namespace std;

int main() {
    int a, cnt = 0, sum = 0;
    for (;;)
    {
        cin >> a;
        if (a < 20 || a > 29) break;
        sum += a;
        cnt ++;
    }
    cout << fixed; cout.precision(2);
    cout << (double)sum / (double)cnt;
    return 0;
}