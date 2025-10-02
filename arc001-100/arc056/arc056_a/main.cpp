#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll a, b, k, l;
    cin >> a >> b >> k >> l;

    ll ans;
    ans = (k / l) * b + (k % l) * a;
    ans = min(ans, ((k - 1 + l) / l) * b);
    ans = min(ans, k * a);

    cout << ans << endl;

    return 0;
}
