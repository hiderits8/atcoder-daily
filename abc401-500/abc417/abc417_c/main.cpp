#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> left(n);
    for (int i = 0; i < n; ++i)
    {
        left[i] = a[i] + i;
    }

    unordered_map<int, int> right;
    for (int i = 0; i < n; ++i)
    {
        right[i - a[i]]++;
    }

    ll ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        right[i - a[i]]--;
        ans += right[left[i]];
    }
    cout << ans << endl;
    return 0;
}