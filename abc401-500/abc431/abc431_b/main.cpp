#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> w(n);
    rep(i, n) cin >> w[i];
    vector<bool> is_set(n, false);

    int ans = x;
    int q;
    cin >> q;
    while (q--)
    {
        int p;
        cin >> p;
        p--;
        if (is_set[p])
        {
            is_set[p] = false;
            ans -= w[p];
        }
        else
        {
            is_set[p] = true;
            ans += w[p];
        }
        cout << ans << endl;
    }
    return 0;
}