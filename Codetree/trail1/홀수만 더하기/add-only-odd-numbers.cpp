#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        if (a % 2 == 1 && a % 3 == 0) sum += a;
    }
    cout << sum;
    return 0;
}