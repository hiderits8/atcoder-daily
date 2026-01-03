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
    ll a;
    cin >> a;

    for (int i = 10; i <= 10000; ++i)
    {
        ll r = i;
        ll ans = 0;
        ll q = 1;
        while (r > 0)
        {
            ans += (r % 10) * q;
            q *= i;
            r /= 10;
        }
        if (ans == a)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}