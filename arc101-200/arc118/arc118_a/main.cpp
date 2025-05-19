#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    ll N;
    cin >> t >> N;

    ll r = (N - 1) / t;
    ll num = N - r * t;

    int prev = 0;
    vector<int> a;
    for (int i = 1; i <= 100; i++)
    {
        int cur = i * (100 + t) / 100;
        if (cur != prev + 1)
        {
            a.push_back(prev + 1);
        }
        prev = cur;
    }

    ll ans = r * (100 + t) + (ll)a[num - 1];

    cout << ans << endl;

    return 0;
}