#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}