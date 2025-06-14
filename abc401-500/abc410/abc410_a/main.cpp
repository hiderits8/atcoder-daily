#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int ans = 0;
    for (auto lim : a)
    {
        if (lim >= k)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}