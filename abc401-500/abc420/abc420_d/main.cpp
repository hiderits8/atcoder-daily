#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    pair<int, int> start, goal;
    rep(i, h) rep(j, w)
    {
        if (s[i][j] == 'S')
            start = {i, j};
        if (s[i][j] == 'G')
            goal = {i, j};
    }

    vector<vector<int>> dp(h * w, vector<int>(2, INT_MAX));
    dp[start.first * w + start.second][0] = 0;

    auto blocked = [&](char ch, int parity)
    {
        if (parity == 0 && ch == 'x')
            return true;
        if (parity == 1 && ch == 'o')
            return true;
        return false;
    };

    queue<tuple<int, int, int>> q;
    q.push({start.first, start.second, 0});
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    while (!q.empty())
    {
        auto [r, c, p] = q.front();
        q.pop();
        int d = dp[r * w + c][p];

        for (auto [dr, dc] : directions)
        {
            int nr = r + dr;
            int nc = c + dc;
            if (nr < 0 || nr >= h || nc < 0 || nc >= w || s[nr][nc] == '#')
                continue;
            if (blocked(s[nr][nc], p))
                continue;

            int np = p ^ (s[nr][nc] == '?');
            int nid = nr * w + nc;
            if (d + 1 < dp[nid][np])
            {
                dp[nid][np] = d + 1;
                q.push({nr, nc, np});
            }
        }
    }

    int gid = goal.first * w + goal.second;
    int ans = min(dp[gid][0], dp[gid][1]);
    if (ans == INT_MAX)
        ans = -1;
    cout << ans << endl;

    return 0;
}