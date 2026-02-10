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

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> G(n);
    rep(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<int> v;
    for (int sv : G[0])
    {
        int cnt = 0;
        int start = sv;
        queue<int> q;
        q.push(sv);
        vector<bool> visited(n, false);
        visited[0] = true;
        visited[start] = true;
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            cnt++;
            for (int nv : G[cur])
            {
                if (nv == 0 || nv == start || visited[nv])
                    continue;
                visited[nv] = true;
                q.push(nv);
            }
        }
        v.push_back(cnt);
    }
    sort(v.begin(), v.end());
    cout << n - v.back() << endl;
    return 0;
}