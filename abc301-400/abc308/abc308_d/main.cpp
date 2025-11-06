#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};

int main(void)
{
    int h, w;
    string s = "snuke";
    cin >> h >> w;
    vector<string> mp(h);
    rep(i, h) cin >> mp[i];
    vector<vector<bool>> seen(h, vector<bool>(w, false));

    auto dfs = [&](auto &self, int x, int y, int depth) -> void
    {
        seen[x][y] = true;
        rep(i, 4)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w)
                continue;
            if (mp[nx][ny] != s[(depth + 1) % 5])
                continue;
            if (seen[nx][ny])
                continue;
            self(self, nx, ny, depth + 1);
        }
    };

    if (mp[0][0] == 's')
        dfs(dfs, 0, 0, 0);
    cout << (seen[h - 1][w - 1] ? "Yes" : "No") << endl;

    return 0;
}
