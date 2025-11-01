#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    int sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }

    int need = sum - m;
    if (need < 0)
    {
        cout << "No" << endl;
        return 0;
    }

    rep(i, n)
    {
        if (a[i] == need)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}