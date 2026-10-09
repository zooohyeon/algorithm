#include <iostream>
using namespace std;

int main() {
    int i = 5, a;
    while(i--)
    {
        cin >> a;
        if (a % 3 != 0)
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}