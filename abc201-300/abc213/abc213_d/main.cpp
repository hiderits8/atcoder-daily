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

vector<int> ans;
void dfs(const vector<vector<int>> &G, int cur, int pre)
{
    ans.push_back(cur);
    for (int to : G[cur])
    {
        if (to == pre)
            continue;
        dfs(G, to, cur);
        ans.push_back(cur);
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> G(n);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    rep(i, n) sort(G[i].begin(), G[i].end());
    dfs(G, 0, -1);
    rep(i, ans.size())
    {
        cout << ans[i] + 1 << (i == ans.size() - 1 ? '\n' : ' ');
    }

    return 0;
}