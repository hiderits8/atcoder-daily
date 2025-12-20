#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    rep(i, n) cin >> a[i];

    int ans = 0;
    rep(i, n - 1)
    {
        if (a[i] == i + 1)
        {
            swap(a[i], a[i + 1]);
            ans++;
        }
    }
    if (a[n - 1] == n)
        ans++;
    cout << ans << endl;
    return 0;
}