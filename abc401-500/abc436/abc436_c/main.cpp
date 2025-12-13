#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    ll n, m;
    cin >> n >> m;

    set<pair<ll, ll>> s;

    while (m--)
    {
        ll r, c;
        cin >> r >> c;
        bool ok = true;
        rep(i, 8)
        {
            if (s.contains({r + dx[i], c + dy[i]}))
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            s.insert({r, c});
        }
    }

    cout << s.size() << endl;

    return 0;
}