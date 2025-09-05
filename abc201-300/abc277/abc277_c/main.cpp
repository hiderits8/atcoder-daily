#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    map<int, vector<int>> g;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<int> q;
    set<int> visited;
    q.push(1);
    visited.insert(1);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (auto p : g[cur])
        {
            if (!visited.contains(p))
            {
                q.push(p);
                visited.insert(p);
            }
        }
    }

    cout << *visited.rbegin() << endl;

    return 0;
}
