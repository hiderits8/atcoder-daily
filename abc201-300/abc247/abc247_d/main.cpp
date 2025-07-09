#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    int q;
    cin >> q;

    vector<pair<ll, ll>> v;
    ll idx = 0;
    ll cidx = 0;
    int cur = 0;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            ll x, c;
            cin >> x >> c;
            v.emplace_back(idx + c - 1, x);
            idx += c;
        }
        else if (type == 2)
        {
            ll c;
            cin >> c;
            ll ans = 0;
            while (c > 0)
            {
                ll last = v[cur].first - cidx + 1;

                if (c >= last)
                {
                    ans += v[cur].second * last;
                    cidx += last;
                    cur++;
                    c -= last;
                }
                else
                {
                    ans += v[cur].second * c;
                    cidx += c;
                    c = 0;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
