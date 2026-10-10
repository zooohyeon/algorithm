#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (n == 0) break;
        if (n % 2 == 0)
        {
            sum += n;
            cnt++;
        }
    }
    cout << cnt << ' ' << sum;
    return 0;
}