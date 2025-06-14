#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Edge
{
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
using Graph = vector<vector<Edge>>;

int main()
{
    int n, m;
    cin >> n >> m;
    Graph g(n);

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        g[a].push_back(Edge(b, w));
    }

    return 0;
}