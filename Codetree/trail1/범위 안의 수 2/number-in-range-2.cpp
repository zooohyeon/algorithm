#include <iostream>
using namespace std;

int main() {
    int i = 10, sum = 0, tmp = 0, a;
    while(i--)
    {
        cin >> a;
        if (a >= 0 && a <= 200)
        {
            sum += a;
            tmp++;
        }
    }
    cout << fixed; cout.precision(1);
    cout << sum << ' ' << ((double)sum / (double)tmp); 
    return 0;
}