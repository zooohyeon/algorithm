#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << fixed; cout.precision(1);
    cout << sum / n << '\n';
    if (sum / n >= 4.0) cout << "Perfect";
    else if (sum / n >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}