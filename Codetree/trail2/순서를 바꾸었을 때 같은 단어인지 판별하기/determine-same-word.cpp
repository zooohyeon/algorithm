#include <bits/stdc++.h>

using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;

    if (word1.length() != word2.length())
    {
        cout << "No";
        return 0;
    }
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    for (int i = 0; i < word1.length(); i++)
    {
        if (word1[i] != word2[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
