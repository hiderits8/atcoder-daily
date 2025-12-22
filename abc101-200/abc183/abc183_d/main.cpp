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
    ll w;
    cin >> n >> w;
    vector<int> s(n), t(n);
    vector<ll> p(n);
    int maxT = 0;
    rep(i, n)
    {
        cin >> s[i] >> t[i] >> p[i];
        maxT = max(maxT, t[i]);
    }

    vector<ll> q(maxT + 1, 0);
    rep(i, n)
    {
        q[s[i]] += p[i];
        q[t[i]] -= p[i];
    }

    ll cur = 0;
    rep(i, maxT + 1)
    {
        cur += q[i];
        if (cur > w)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}