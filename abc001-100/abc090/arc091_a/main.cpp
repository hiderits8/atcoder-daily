#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n == 1 && m == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 1 || m == 1)
    {
        int l = max(n, m);
        cout << l - 2 << endl;
        return 0;
    }
    else if (n == 2 || m == 2)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cout << 1LL * (n - 2) * (m - 2) << endl;
        return 0;
    }
}