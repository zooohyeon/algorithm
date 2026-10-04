#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << ((a >= 1.0 && b >= 1.0) ? "High" : (a >= 0.5 && b >= 0.5) ? "Middle" : "Low");
    return 0;
}