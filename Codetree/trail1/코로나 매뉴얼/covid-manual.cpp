#include <iostream>
using namespace std;

int main() {
    char a;
    int tem, cnt = 0;
    int i = 3;
    while(i--)
    {
        cin >> a >> tem;
        
        if (a == 'Y' && tem >= 37) cnt++;
    }
    cout << ((cnt >= 2) ? 'E' : 'N');
    return 0;
}