#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> ans(n, 0);
    rep(i, n - 1)
    {
        if (a[i] > a[i + 1])
        {
            ans[i] ^= 1;
            ans[i + 1] ^= 1;
        }
    }

    rep(i, n)
    {
        if (i != 0)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
