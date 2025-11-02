#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    ll ans = 0;
    int right = 0;
    int ca = 0, cb = 0;
    int ta = -1;

    rep(left, n - a)
    {
        while (right < n && cb < b)
        {
            if (s[right] == 'a')
            {
                ca++;
                if (ta < 0 && ca >= a)
                    ta = right;
            }
            else
            {
                cb++;
            }
            right++;
        }

        if (ta >= 0)
            ans += right - ta;

        if (s[left] == 'a')
        {
            ca--;
            if (ca < a)
                ta = -1;
        }
        else
        {
            cb--;
        }
    }

    cout << ans << endl;
    return 0;
}