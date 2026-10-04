#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << ((a < 0) ? "ice" : (a < 100) ? "water" : "vapor");
    return 0;
}