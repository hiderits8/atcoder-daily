#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> p(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        p[i]--;
    }

    vector<bool> seen(n, false);
    int ans = 0, cur = 0;

    while (cur != 1)
    {
        if (seen[cur])
        {
            cout << -1 << endl;
            return 0;
        }
        seen[cur] = true;
        cur = p[cur];
        ans++;
    }

    cout << ans << endl;
    return 0;
}
