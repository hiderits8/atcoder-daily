#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> a, b;
    rep(i, n * 2)
    {
        if (s[i] == 'A')
        {
            a.push_back(i);
        }
        else
        {
            b.push_back(i);
        }
    }

    ll ans = 0;
    rep(i, n)
    {
        ans += abs(a[i] - i * 2);
    }

    ll ans2 = 0;
    rep(i, n)
    {
        ans2 += abs(b[i] - i * 2);
    }

    cout << min(ans, ans2) << endl;

    return 0;
}