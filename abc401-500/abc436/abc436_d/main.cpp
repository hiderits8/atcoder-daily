#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};
const int INF = 1e9;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<string> mp(h);
    rep(i, h) cin >> mp[i];

    vector<vector<pair<int, int>>> warp(26);
    rep(i, h) rep(j, w)
    {
        char c = mp[i][j];
        if ('a' <= c && c <= 'z')
            warp[c - 'a'].push_back({i, j});
    }

    vector<vector<int>> dist(h, vector<int>(w, INF));
    queue<pair<int, int>> q;
    dist[0][0] = 0;
    q.push({0, 0});

    vector<bool> used(26, false);

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        int d = dist[x][y];

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir], ny = y + dy[dir];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w)
                continue;
            if (mp[nx][ny] == '#')
                continue;
            if (dist[nx][ny] != INF)
                continue;
            dist[nx][ny] = d + 1;
            q.push({nx, ny});
        }

        char c = mp[x][y];
        if ('a' <= c && c <= 'z')
        {
            int id = c - 'a';
            if (!used[id])
            {
                used[id] = true;
                for (auto [nx, ny] : warp[id])
                {
                    if (dist[nx][ny] != INF)
                        continue;
                    dist[nx][ny] = d + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    int ans = dist[h - 1][w - 1];
    if (ans == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}