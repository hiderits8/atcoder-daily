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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> w(n), p(n), c(n);
        ll limit = 0;
        rep(i, n)
        {
            cin >> w[i] >> p[i];
            limit += p[i];
            c[i] = w[i] + p[i];
        }
        sort(c.begin(), c.end());

        int ans = 0;
        for (auto cur : c)
        {
            limit -= cur;
            if (limit >= 0)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}