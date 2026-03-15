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

int main()
{
    ll n;
    cin >> n;
    ll tmp = n;
    int ans = 0;
    for (ll i = 2; i * i <= tmp; ++i)
    {
        if (tmp % i)
            continue;

        int e = 0;
        while (tmp % i == 0)
        {
            tmp /= i;
            e++;
        }
        for (ll k = 1; e >= k; k++)
        {
            e -= k;
            ans++;
        }
    }
    if (tmp > 1)
        ans++;

    cout << ans << endl;
    return 0;
}