#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<bool> visited(100001, false);

    int ans = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (visited[a])
        {
            ans++;
        }
        else
        {
            visited[a] = true;
        }
    }
    cout << ans << endl;
    return 0;
}
