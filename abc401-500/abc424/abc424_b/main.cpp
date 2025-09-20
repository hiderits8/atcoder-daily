#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<bitset<10>> cors(n, 0);
    vector<int> ans;

    while (k--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        cors[a][b] = 1;
        if (cors[a].count() == m)
            ans.push_back(a + 1);
    }

    rep(i, ans.size())
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}