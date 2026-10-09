#include <iostream>
using namespace std;

int main() {
    int i = 10, cnt = 0;
    while(i--)
    {
        int a;
        cin >> a;
        if (a % 2 == 1) cnt++;
    }
    cout << cnt;
    return 0;
}