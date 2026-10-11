#include <iostream>

using namespace std;

int a, b;

int isPrime(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && i != 1 && i != a) return 0;
    }
    return 1;
}
int main() {
    cin >> a >> b;
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i)) sum += i;
    }

    cout << sum;

    return 0;
}