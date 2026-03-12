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
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    vector<vector<ll>> G(n);
    rep(i, m)
    {
        int c, d;
        cin >> c >> d;
        --c;
        --d;
        G[c].push_back(d);
        G[d].push_back(c);
    }

    vector<bool> visited(n, false);
    rep(i, n)
    {
        if (visited[i])
            continue;
        ll sum_a = a[i];
        ll sum_b = b[i];
        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            for (int nv : G[v])
            {
                if (visited[nv])
                    continue;
                visited[nv] = true;
                sum_a += a[nv];
                sum_b += b[nv];
                q.push(nv);
            }
        }
        if (sum_a != sum_b)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}