#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    map<char, int> m;

    for (auto c : s)
    {
        m[c]++;
    }

    for (auto [c, r] : m)
    {
        if (r == 1)
        {
            cout << c << endl;
        }
    }

    return 0;
}