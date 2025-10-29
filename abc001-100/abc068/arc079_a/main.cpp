#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<unordered_set<int>> e(n);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        e[a].insert(b);
        e[b].insert(a);
    }

    for (auto ai : e[0])
    {
        if (e[n - 1].contains(ai))
        {
            cout << "POSSIBLE\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}
