#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll n, x;
ll ans = 0;
vector<vector<ll>> a(n);

void dfs(ll d, ll p)
{
    if (d == n)
    {
        if (p == x)
            ans++;
        return;
    }
    for (ll c : a[d])
    {
        if (p * c > x)
            continue;
        dfs(d + 1, p * c);
    }
}

int main(void)
{
    cin >> n >> x;
    a.resize(n);
    rep(i, n)
    {
        int c;
        cin >> c;
        a[i].resize(c);
        rep(j, c) cin >> a[i][j];
    }

    dfs(0, 1);

    cout << ans << endl;

    return 0;
}
