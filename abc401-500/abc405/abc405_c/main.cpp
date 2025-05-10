#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<ll> a(n + 1);
    vector<ll> sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
        sum[i + 1] = sum[i] + a[i + 1];
    }

    ll res = 0;
    for (int i = 1; i < n; i++)
    {
        res += a[i] * (sum[n] - sum[i]);
    }

    cout << res << endl;
    return 0;
}