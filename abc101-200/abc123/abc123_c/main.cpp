#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n;
    cin >> n;
    ll a[5];
    rep(i, 5) cin >> a[i];

    ll mn = *min_element(a, a + 5);
    ll ans = 4 + (n - 1 + mn) / mn;

    cout << ans << endl;

    return 0;
}
