#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;

    rep(i, n)
    {
        if (i < m)
        {
            cout << "OK\n";
        }
        else
        {
            cout << "Too Many Requests\n";
        }
    }

    return 0;
}