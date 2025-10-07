#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int h, w, k;
vector<string> mp;
int ans = 0;

void dfs(int x, int y, int depth, vector<vector<bool>> &visited)
{
    if (visited[x][y] || mp[x][y] == '#')
        return;
    if (depth == 0)
    {
        ans++;
        return;
    }
    visited[x][y] = true;
    if (x - 1 >= 0)
    {
        dfs(x - 1, y, depth - 1, visited);
    }
    if (y - 1 >= 0)
    {
        dfs(x, y - 1, depth - 1, visited);
    }
    if (x + 1 < h)
    {
        dfs(x + 1, y, depth - 1, visited);
    }
    if (y + 1 < w)
    {
        dfs(x, y + 1, depth - 1, visited);
    }
    visited[x][y] = false;
}

int main(void)
{
    cin >> h >> w >> k;
    mp.resize(h);
    rep(i, h) cin >> mp[i];

    rep(i, h) rep(j, w)
    {
        if (mp[i][j] == '#')
            continue;

        vector<vector<bool>> visited(h, vector<bool>(w, false));

        dfs(i, j, k, visited);
    }

    cout << ans << endl;

    return 0;
}
