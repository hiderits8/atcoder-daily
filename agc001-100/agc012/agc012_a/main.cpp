#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    int n;
    cin >> n;

    vector<ll> p(n * 3);

    for (int i = 0; i < n * 3; ++i)
    {
        cin >> p[i];
    }
    sort(p.rbegin(), p.rend());

    ll ans = 0;
    for (int i = 0; i < n * 2; ++i)
    {
        if (i & 1)
            ans += p[i];
    }

    cout << ans << endl;
    return 0;
}
