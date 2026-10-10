#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100];
int arr2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
        if (i % 2 == 0)
        {
            sort(arr2, arr2 + i + 1);
            cout << arr2[(i + 1) / 2] << ' ';
        }
    }

    return 0;
}