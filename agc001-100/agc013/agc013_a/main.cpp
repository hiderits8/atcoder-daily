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

    bool inc = false, dec = false;
    int ans = 1;
    rep(i, n - 1)
    {
        if (!inc && !dec)
        {
            if (a[i] > a[i + 1])
            {
                dec = true;
            }
            else if (a[i] < a[i + 1])
            {
                inc = true;
            }
        }
        else if (inc)
        {
            if (a[i] > a[i + 1])
            {
                ans++;
                inc = false;
            }
        }
        else
        {
            if (a[i] < a[i + 1])
            {
                ans++;
                dec = false;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
