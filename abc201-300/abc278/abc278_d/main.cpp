#include <iostream>
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

    int q;
    cin >> q;

    bool is_based = false;
    ll base = 0;
    vector<ll> add(n, 0);
    vector<int> gen(n, 0);
    int changed = 0;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            cin >> base;
            is_based = true;
            changed++;
        }
        else if (t == 2)
        {
            int i;
            ll x;
            cin >> i >> x;
            i--;
            if (gen[i] != changed)
            {
                add[i] = 0;
                gen[i] = changed;
            }
            add[i] += x;
        }
        else
        {
            int i;
            cin >> i;
            i--;
            ll inc = gen[i] != changed ? 0 : add[i];
            if (is_based)
            {
                cout << inc + base << endl;
            }
            else
            {
                cout << inc + a[i] << endl;
            }
        }
    }

    return 0;
}
