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
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    unordered_map<string, string> G;
    unordered_map<string, int> state;
    rep(i, n)
    {
        cin >> s[i] >> t[i];
        G[s[i]] = t[i];
        state[s[i]] = 0;
    }

    bool ok = true;
    auto dfs = [&](this auto dfs, const string &x) -> void
    {
        state[x] = 1;

        auto it = G.find(x);
        if (it != G.end())
        {
            const string &y = it->second;
            if (state.find(y) != state.end())
            {
                int &sy = state[y];
                if (sy == 1)
                {
                    ok = false;
                    return;
                }
                else if (sy == 0)
                {
                    dfs(y);
                }
                if (!ok)
                    return;
            }
        }
        state[x] = 2;
    };

    rep(i, n)
    {
        if (state[s[i]] == 0)
            dfs(s[i]);
        if (!ok)
            break;
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}