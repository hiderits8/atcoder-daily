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
    string s;
    cin >> s;

    ll sz = s.size();
    ll ans = sz * (sz - 1);

    for (ll i = 0; i < sz; ++i)
    {
        if (s[i] == 'U')
        {
            ans += i;
            continue;
        }
        ans += sz - i - 1;
    }

    cout << ans << endl;
    return 0;
}