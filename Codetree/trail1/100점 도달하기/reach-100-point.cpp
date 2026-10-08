#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = N; i <= 100; i++)
    {
        if (i < 60) cout << 'F' << ' ';
        else if (i < 70) cout << 'D' << ' ';
        else if (i < 80) cout << 'C' << ' ';
        else if (i < 90) cout << 'B' << ' ';
        else cout << 'A' << ' ';
    }
    return 0;
}