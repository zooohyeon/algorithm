#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    cout << ((a >= 1.0) ? "High" : (a >= 0.5) ? "Middle" : "Low");
    return 0;
}