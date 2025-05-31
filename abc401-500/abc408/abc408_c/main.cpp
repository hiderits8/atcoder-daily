#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> d(n + 2, 0);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    int ans = m + 1;
    vector<int> s(n + 1);
    s[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        s[i] = s[i - 1] + d[i];
        if (s[i] < ans)
        {
            ans = s[i];
        }
    }

    cout << ans << endl;

    return 0;
}
