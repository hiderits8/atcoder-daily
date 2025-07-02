#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i]--;
    }

    vector<bool> seen(n);
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!seen[i])
        {
            if (a[a[i]] == i)
            {
                ans++;
                seen[a[i]] = true;
            }
            seen[i] = true;
        }
    }

    cout << ans << endl;

    return 0;
}
