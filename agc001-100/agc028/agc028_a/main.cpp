#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    unordered_map<ll, char> a;

    ll l = lcm(n, m);

    ll ldn = l / n, ldm = l / m;
    rep(i, n)
    {
        a[ldn * i] = s[i];
    }
    rep(i, m)
    {
        if (a.count(ldm * i) != 0 && a[ldm * i] != t[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << l << endl;
    return 0;
}
