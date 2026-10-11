#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    cout << ((n % 2 == 0 && ((n % 10) + (n / 10)) % 5 == 0) ? "Yes" : "No");

    return 0;
}