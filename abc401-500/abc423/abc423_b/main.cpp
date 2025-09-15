#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    rep(i, h) cin >> a[i];

    bool ok = true;
    rep(i, h)
    {
        rep(j, w)
        {
            if (a[i][j] == '#')
            {
                int cnt = 0;
                if (i + 1 < h && a[i + 1][j] == '#')
                    cnt++;
                if (i - 1 >= 0 && a[i - 1][j] == '#')
                    cnt++;
                if (j + 1 < w && a[i][j + 1] == '#')
                    cnt++;
                if (j - 1 >= 0 && a[i][j - 1] == '#')
                    cnt++;
                if (cnt % 2 != 0 || cnt == 0)
                    ok = false;
            }
            if (!ok)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}