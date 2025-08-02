#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll total = 0;
    for (auto &[n, c] : mp)
    {
        total += 1LL * c * (c - 1) / 2;
    }

    for (auto &x : a)
    {
        ll c = mp[x];
        cout << total - (c - 1) << endl;
    }

    return 0;
}
