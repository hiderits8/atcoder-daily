
#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int n;
    cin >> n;

    vector<int> G(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> G[i];
    }

    vector<int> fleq(n + 1, 0), seen;
    int v = 1;
    while (fleq[v] == 0)
    {
        fleq[v]++;
        seen.push_back(v);
        v = G[v];
    }

    vector<int> ans;

    bool flg = false;
    for (auto &next : seen)
    {
        if (next == v)
        {
            flg = true;
        }
        if (flg)
        {
            ans.push_back(next);
        }
    }

    int si = ans.size();
    cout << si << endl;

    for (int i = 0; i < si; ++i)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << ans[i];
    }

    cout << endl;

    return 0;
}
