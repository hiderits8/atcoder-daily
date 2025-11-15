#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int x;
    cin >> x;
    vector<int> a;
    while (x > 0)
    {
        int r = x % 10;
        a.push_back(r);
        x /= 10;
    }

    sort(a.begin(), a.end());
    rep(i, a.size())
    {
        if (a[i] != 0)
        {
            swap(a[0], a[i]);
            break;
        }
    }

    rep(i, a.size()) cout << a[i];
    cout << endl;

    return 0;
}