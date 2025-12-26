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
    int n, m;
    cin >> n >> m;
    vector ga(n, vector<bool>(n));
    vector gb(n, vector<bool>(n));

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        ga[a][b] = ga[b][a] = true;
    }
    rep(i, m)
    {
        int c, d;
        cin >> c >> d;
        c--;
        d--;
        gb[c][d] = gb[d][c] = true;
    }

    vector<int> p(n);
    iota(p.begin(), p.end(), 0);

    do
    {
        bool ok = true;
        rep(i, n) rep(j, n)
        {
            if (ga[i][j] != gb[p[i]][p[j]])
            {
                ok = false;
            }
        }
        if (ok)
        {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(p.begin(), p.end()));

    cout << "No" << endl;
    return 0;
}