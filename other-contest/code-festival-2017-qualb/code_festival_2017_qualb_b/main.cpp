#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    multiset<int> d;
    rep(i, n)
    {
        int di;
        cin >> di;
        d.insert(di);
    }

    int m;
    cin >> m;

    while (m--)
    {
        int t;
        cin >> t;

        if (d.find(t) == d.end())
        {
            cout << "NO" << endl;
            return 0;
        }

        d.erase(d.find(t));
    }
    cout << "YES" << endl;

    return 0;
}
