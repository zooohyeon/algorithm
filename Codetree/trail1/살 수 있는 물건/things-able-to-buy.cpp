#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << ((a >= 3000) ? "book" : (a >= 1000) ? "mask" : "no");
    return 0;
}