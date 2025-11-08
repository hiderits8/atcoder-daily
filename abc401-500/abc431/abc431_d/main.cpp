#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const ll INF = 1e18;

int main()
{
    int n;
    cin >> n;
    vector<int> w(n);
    vector<ll> h(n), b(n);
    vector<int> tmph;
    ll ans = 0;
    int hw = 0, bw = 0;
    rep(i, n)
    {
        cin >> w[i] >> h[i] >> b[i];
        ans += max(h[i], b[i]);
        if (h[i] > b[i])
        {
            hw += w[i];
            tmph.push_back(i);
        }
        else
        {
            bw += w[i];
        }
    }

    if (hw <= bw)
    {
        cout << ans << endl;
        return 0;
    }

    int last = (hw - bw + 1) / 2;
    vector<ll> dp(last + 1, INF);
    dp[0] = 0;
    for (auto i : tmph)
    {
        vector<ll> ndp = dp;
        for (int x = 0; x <= last; ++x)
        {
            int nx = min(last, x + w[i]);
            ndp[nx] = min(ndp[nx], dp[x] + h[i] - b[i]);
        }
        dp.swap(ndp);
    }

    cout << ans - dp[last] << endl;

    return 0;
}