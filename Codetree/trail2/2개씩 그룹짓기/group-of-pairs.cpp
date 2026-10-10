#include <bits/stdc++.h>

using namespace std;

int N;
int nums[2000];
int nums2[2000];

int cmp(int a, int b)
{
    return a > b;
}
int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + (2 * N));

    for (int j = 0; j < 2 * N; j++)
    {
        nums2[j] = nums[j];
    }

    int max = 0;

    sort (nums, nums + (2 * N), cmp);

    for (int i = 0; i < 2 * N; i++)
    {
        if (nums2[i] + nums[i] > max) max = nums2[i] + nums[i];
    }

    cout << max;

    return 0;
}
