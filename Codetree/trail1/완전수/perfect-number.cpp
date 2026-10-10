#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int cnt = 0;
    //6 28 496
    for (int i = st; i <= ed; i++)
    {
        if (i == 6 || i == 28 || i == 496) cnt++;
    }
    cout << cnt;

    return 0;
}
