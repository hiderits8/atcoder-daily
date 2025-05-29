#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<ll> sum(n);
    sum[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += sum[n - 1] - sum[i] - a[i] * (n - 1 - i);
    }

    cout << ans << endl;

    return 0;
}