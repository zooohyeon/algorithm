#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N * N;
    if (N < 5) cout << '\n' << "tiny";
    return 0;
}