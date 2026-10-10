#include <iostream>
using namespace std;

int main() {
    int n, a, cnt = 0;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> a;
            sum += a;
        }
        if (sum / 4 >= 60)
        {
            cout << "pass\n";
            cnt++;
        }
        else cout << "fail\n";
    }
    cout << cnt;
    return 0;
}