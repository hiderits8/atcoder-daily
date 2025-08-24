#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x, y;
    cin >> x >> y;
    int ans = x + y;
    if (ans > 12)
        ans -= 12;
    cout << ans << endl;
    return 0;
}