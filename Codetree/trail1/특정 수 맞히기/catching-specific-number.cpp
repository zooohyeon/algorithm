#include <iostream>
using namespace std;

int main() {
    int n;
    for(;;)
    {
        cin >> n;
        if (n > 25) cout << "Lower\n";
        else if (n < 25) cout << "Higher\n";
        else 
        {
            cout << "Good";
            return 0;
        }
    }
    return 0;
}