#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, x;
    cin >> n >> x;
    vector<ll> dist(n);
    rep(i, n)
    {
        ll y;
        cin >> y;
        dist[i] = abs(x - y);
    }

    if (n == 1)
    {
        cout << dist[0] << endl;
        return 0;
    }
    else
    {
        int ans = INT_MAX;
        rep(i, n - 1)
        {
            int cur = gcd(dist[i], dist[i + 1]);
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }

    return 0;
}
