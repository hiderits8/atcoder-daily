#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        sum += a[i + 1] - a[i];
    }

    double ans = (double)sum / (n - 1);

    cout << fixed << setprecision(10);
    cout << ans << endl;

    return 0;
}
