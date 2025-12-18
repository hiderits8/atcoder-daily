#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    ll G = 0;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n - 1)
    {
        G = gcd(G, abs(a[i] - a[i + 1]));
    }

    if (G == 0 || G >= 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    return 0;
}
