#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;
    while(i++)
    {
        n /= i;
        if (n <= 1)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}