#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int H, W, ans;
vector<vector<int>> mp;

void dfs(int i, int j, set<int> s)
{
    if (s.count(mp[i][j]))
        return;
    s.insert(mp[i][j]);
    if (i == H - 1 && j == W - 1)
    {
        ++ans;
        return;
    }
    if (j + 1 < W)
        dfs(i, j + 1, s);
    if (i + 1 < H)
        dfs(i + 1, j, s);
}

int main()
{
    cin >> H >> W;
    mp = vector(H, vector<int>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> mp[i][j];
        }
    }
    dfs(0, 0, set<int>());
    cout << ans << endl;

    return 0;
}