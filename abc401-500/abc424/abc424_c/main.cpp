#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mp(n);
    vector<int> s;

    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            s.push_back(i);
            continue;
        }
        a--;
        b--;
        mp[a].push_back(i);
        mp[b].push_back(i);
    }

    queue<int> q;
    vector<bool> visited(n, false);
    rep(i, s.size())
    {
        q.push(s[i]);
        visited[s[i]] = true;
    }

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto nv : mp[v])
        {
            if (!visited[nv])
            {
                visited[nv] = true;
                q.push(nv);
            }
        }
    }

    cout << count(visited.begin(), visited.end(), true) << endl;

    return 0;
}