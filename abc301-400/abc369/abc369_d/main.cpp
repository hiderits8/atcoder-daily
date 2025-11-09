#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<vector<ll>> s(n + 1, vector<ll>(2));
    s[0][0] = 0;
    s[0][1] = -1e+18;

    rep(i, n)
    {
        s[i + 1][0] = max(s[i][1] + a[i] * 2, s[i][0]);
        s[i + 1][1] = max(s[i][0] + a[i], s[i][1]);
    }

    cout << max(s[n][0], s[n][1]) << endl;

    return 0;
}
