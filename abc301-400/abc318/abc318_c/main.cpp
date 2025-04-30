#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, d, p;
    cin >> n >> d >> p;
    int cnt = 0;
    vector<int> fee(n);
    for (int i = 0; i < n; i++)
    {
        int f;
        cin >> f;
        if ((ll)f * d > p)
        {
            ++cnt;
        }
        fee[i] = f;
    }
    sort(fee.rbegin(), fee.rend());

    int big = cnt / d;
    int small = (cnt + d - 1) / d;

    int last = big * d;
    ll bigres = (ll)big * p;
    for (auto fe : fee)
    {
        if (last > 0)
        {
            --last;
        }
        else
        {
            bigres += fe;
        }
    }

    last = small * d;
    ll smallres = (ll)small * p;
    for (auto fe : fee)
    {
        if (last > 0)
        {
            --last;
        }
        else
        {
            smallres += fe;
        }
    }
    cout << min(smallres, bigres) << endl;

    return 0;
}