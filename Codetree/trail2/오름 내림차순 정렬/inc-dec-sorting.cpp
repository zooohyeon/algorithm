#include <bits/stdc++.h>

using namespace std;

int n;
int nums[100];

int cmp (int a, int b)
{
    return a > b;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + n);
    
    for (int i = 0; i < n; i++) {
        cout << nums[i] << ' ';
    }

    sort(nums, nums + n, cmp);

    cout << '\n';

    for (int i = 0; i < n; i++) {
        cout << nums[i] << ' ';
    }

    return 0;
}
