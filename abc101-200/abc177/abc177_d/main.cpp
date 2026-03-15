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
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].insert(b);
        g[b].insert(a);
    }

    vector<bool> visited(n, false);
    int ans = 0;
    rep(i, n)
    {
        int cnt = 0;
        if (visited[i])
            continue;
        visited[i] = true;
        queue<int> q;
        q.push(i);
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            cnt++;
            for (int nv : g[v])
            {
                if (visited[nv])
                    continue;
                visited[nv] = true;
                q.push(nv);
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}