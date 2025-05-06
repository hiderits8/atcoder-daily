#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        p %= 200;
        a[p]++;
    }

    ll cnt = 0;
    for (auto [r, c] : a)
    {
        if (c < 2)
            continue;
        ll cc = c;
        cnt += (cc - 1) * cc / 2;
    }

    cout << cnt << "\n";
    return 0;
}