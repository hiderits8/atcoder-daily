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
using pi = pair<int, int>;

double dist(pi a, pi b)
{
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    vector<pi> x(n), y(n);
    rep(i, n) cin >> x[i].first >> x[i].second >> y[i].first >> y[i].second;

    double ans = 2e9;
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);

    do
    {
        for (int i = 0; i < (1 << n); i++)
        {
            double tmp = 0;
            pi cur = make_pair(0, 0);
            for (int j = 0; j < n; j++)
            {
                int idx = p[j];
                if (i & (1 << j))
                {
                    tmp += dist(cur, x[idx]) / (double)s;
                    tmp += dist(x[idx], y[idx]) / (double)t;
                    cur = y[idx];
                }
                else
                {
                    tmp += dist(cur, y[idx]) / (double)s;
                    tmp += dist(y[idx], x[idx]) / (double)t;
                    cur = x[idx];
                }
            }
            ans = min(ans, tmp);
        }

    } while (next_permutation(p.begin(), p.end()));

    printf("%.10f\n", ans);

    return 0;
}