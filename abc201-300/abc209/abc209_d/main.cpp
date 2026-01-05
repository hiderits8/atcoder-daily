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
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> G(n);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    queue<int> que;
    vector<int> dist(n, -1);
    dist[0] = 0;
    que.push(0);
    while (!que.empty())
    {
        int p = que.front();
        que.pop();
        for (int next : G[p])
        {
            if (dist[next] != -1)
                continue;
            dist[next] = dist[p] + 1;
            que.push(next);
        }
    }

    rep(i, q)
    {
        int c, d;
        cin >> c >> d;
        c--, d--;
        int sd = dist[c] + dist[d];
        if (sd % 2 == 0)
        {
            cout << "Town" << endl;
        }
        else
        {
            cout << "Road" << endl;
        }
    }

    return 0;
}