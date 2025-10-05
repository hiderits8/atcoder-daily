#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    vector<int> b(3), r(3);
    rep(i, 3) cin >> b[i];
    rep(i, 3) cin >> r[i];

    sort(r.begin(), r.end());
    int ans = 0;

    do
    {
        int cnt = 1;
        rep(i, 3)
        {
            cnt *= b[i] / r[i];
        }
        ans = max(ans, cnt);
    } while (next_permutation(r.begin(), r.end()));

    cout << ans << endl;
    return 0;
}
