#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    int dup = 0;
    rep(i, n)
    {
        int cur = i + 1;
        bool ok = true;
        int sbegin = n - cur;

        rep(j, cur)
        {
            if (s[sbegin + j] != t[j])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            dup = cur;
        }
    }

    cout << 2 * n - dup << endl;
    return 0;
}