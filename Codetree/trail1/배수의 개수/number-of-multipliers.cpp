#include <iostream>
using namespace std;

int main() {
    int i = 10, cnt3 = 0, cnt5 = 0;
    while(i--)
    {
        int a;
        cin >> a;
        if (a % 3 == 0) cnt3++;
        if (a % 5 == 0) cnt5++;
    }
    cout << cnt3 << ' ' << cnt5;
    return 0;
}