#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin >> q;

    vector<pair<ll, ll>> v;
    ll idx = 0;
    ll kid = 0;
    ll cur = 0;

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            ll c, x;
            cin >> c >> x;

            v.emplace_back(idx + c - 1, x);
            idx += c;
        }
        else
        {
            ll k;
            cin >> k;
            ll ans = 0;
            while (k > 0)
            {
                ll last = v[cur].first - kid + 1;
                if (last <= k)
                {
                    kid += last;
                    ans += v[cur].second * last;
                    cur++;
                    k -= last;
                }
                else
                {
                    kid += k;
                    ans += v[cur].second * k;
                    k = 0;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}