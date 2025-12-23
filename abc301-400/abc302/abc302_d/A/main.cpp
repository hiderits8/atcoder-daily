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
    ll d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    auto a_it = a.begin(), b_it = b.begin();

    while (a_it != a.end() && b_it != b.end())
    {
        if (abs(*a_it - *b_it) <= d)
        {
            cout << *a_it + *b_it << endl;
            return 0;
        }

        if (*a_it > *b_it)
        {
            a_it++;
        }
        else
        {
            b_it++;
        }
    }
    cout << -1 << endl;

    return 0;
}