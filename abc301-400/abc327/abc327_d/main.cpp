#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

bool dfs(const vector<vector<int>> &G, int v, int c, vector<int> &color)
{
    color[v] = c;
    for (int to : G[v])
    {
        if (color[to] == 0)
        {
            if (!dfs(G, to, -c, color))
                return false;
        }
        else if (color[to] != -c)
            return false;
    }
    return true;
}

bool is_bipartite(const vector<vector<int>> &G)
{
    int n = G.size();
    vector<int> color(n, 0);
    rep(i, n)
    {
        if (color[i] != 0)
            continue;
        if (!dfs(G, i, 1, color))
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i], a[i]--;
    rep(i, m) cin >> b[i], b[i]--;

    vector<vector<int>> G(n);
    rep(i, m)
    {
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    cout << (is_bipartite(G) ? "Yes" : "No") << endl;

    return 0;
}