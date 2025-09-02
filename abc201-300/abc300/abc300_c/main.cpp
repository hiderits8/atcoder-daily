#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

struct P
{
    int i, j;
};

int main(void)
{
    int h, w;
    cin >> h >> w;
    vector<vector<bool>> mp(h, vector<bool>(w, false));
    vector<P> next;

    rep(i, h)
    {
        string s;
        cin >> s;
        rep(j, w)
        {
            if (s[j] == '#')
            {
                mp[i][j] = true;
                P p = {i, j};
                next.push_back(p);
            }
        }
    }

    vector<int> dy = {1, 1, -1, -1};
    vector<int> dx = {1, -1, 1, -1};

    int m = min(h, w);
    vector<int> ans(m, 0);

    for (auto p : next)
    {
        int n = 0;
        while (1)
        {
            n++;
            bool ok = true;
            rep(i, 4)
            {
                int y = p.i + dy[i] * n;
                int x = p.j + dx[i] * n;
                if (y < 0 || y >= h || x < 0 || x >= w || !mp[y][x])
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                n--;
                break;
            }
        }
        n--;
        if (n >= 0)
        {
            ans[n]++;
        }
    }

    bool first = true;
    for (auto a : ans)
    {
        if (!first)
        {
            cout << " ";
        }
        cout << a;
        first = false;
    }
    cout << endl;

    return 0;
}
