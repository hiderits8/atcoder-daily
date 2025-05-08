#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n;
    vector<ll> X(N), P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i]; // すでに X[i] < X[i+1] の保証あり
    }
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vil[i] = x;
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        sum += p;
        mp[vil[i]] = sum;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        auto it = mp.lower_bound(l);
        auto last = mp.upper_bound(r);
        cout << (ll)last->second - (ll)it->second << endl;
    }

    return 0;
}