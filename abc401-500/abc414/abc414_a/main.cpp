#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if (x1 <= l && x2 >= r)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}