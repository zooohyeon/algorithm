#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt;
    for (int i = 0; i < n; i++)
    {
        cnt = n;
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << cnt << ' ';
            }
            cnt--;
        }
        cout << '\n';
    }
    return 0;
}