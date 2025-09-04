#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    vector<int> pos_min(m);
    ll idx = 0;
    for (int i = 0; i < m; ++i)
    {
        while (idx < n && a[idx] != b[i])
            idx++;
        if (idx == n)
        {
            cout << "No" << endl;
            return 0;
        }
        pos_min[i] = idx;
        idx++;
    }

    vector<int> pos_max(m);
    idx = n - 1;
    for (int i = m - 1; i >= 0; --i)
    {
        while (idx >= 0 && a[idx] != b[i])
            idx--;
        pos_max[i] = idx;
        idx--;
    }

    cout << (pos_max == pos_min ? "No" : "Yes") << endl;

    return 0;
}
