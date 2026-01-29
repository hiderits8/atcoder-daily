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
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    sort(l.begin(), l.end());

    ll ans = 0;
    for (int i = n - 1; i > 1; --i)
    {
        for (int j = i - 1; j > 0; --j)
        {
            int k = l[i] - l[j];
            ll cnt = l.begin() + j - upper_bound(l.begin(), l.begin() + j, k);
            ans += cnt;
        }
    }

    cout << ans << endl;
    return 0;
}