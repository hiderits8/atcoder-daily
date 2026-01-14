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
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    ll sa = 0;
    rep(i, n)
    {
        cin >> a[i];
        sa += a[i];
    }

    s %= sa;
    if (s == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    int right = 0;
    ll sum = 0;

    for (int left = 0; left < n; ++left)
    {
        while (right < left + n && sum < s)
        {
            sum += a[right % n];
            right++;
        }

        if (sum == s)
        {
            cout << "Yes" << endl;
            return 0;
        }

        sum -= a[left % n];
    }

    cout << "No" << endl;

    return 0;
}