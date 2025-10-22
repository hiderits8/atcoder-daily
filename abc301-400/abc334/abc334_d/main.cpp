#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, q;
    cin >> n >> q;

    vector<ll> r(n);
    rep(i, n) cin >> r[i];
    sort(r.begin(), r.end());

    vector<ll> s(n + 1);
    s[0] = 0;
    rep(i, n) s[i + 1] = s[i] + r[i];

    while (q--)
    {
        ll x;
        cin >> x;
        cout << upper_bound(s.begin(), s.end(), x) - s.begin() - 1 << endl;
    }

    return 0;
}
