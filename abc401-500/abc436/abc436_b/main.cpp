#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mp(n, vector<int>(n, -1));

    int r = 0;
    int c = (n - 1) / 2;
    for (int k = 1; k <= n * n; ++k)
    {
        mp[r][c] = k;
        if (mp[(r - 1 + n) % n][(c + 1) % n] == -1)
        {
            r = (r - 1 + n) % n;
            c = (c + 1) % n;
        }
        else
        {
            r = (r + 1) % n;
        }
    }

    rep(i, n)
    {
        rep(j, n)
        {
            cout << mp[i][j];
            if (j != n - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}