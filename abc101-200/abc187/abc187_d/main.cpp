#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<ll> x(n);
    ll p = 0;
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        p -= a;
        x[i] = a + a + b;
    };

    sort(x.begin(), x.end());

    int ans = 0;
    while (p <= 0)
    {
        p += x.back();
        x.pop_back();
        ans++;
    }
    cout << ans << endl;

    return 0;
}
