#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    ll ans = 0;
    while (n--)
    {
        int t;
        cin >> t;

        ll p = 1LL << t;
        ans = (ans / p + 1) * p;

        if (ans % (p * 2) == 0)
            ans += p;
    }

    cout << ans << endl;

    return 0;
}
